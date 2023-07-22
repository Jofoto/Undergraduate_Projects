const express = require('express')
const router = express.Router()
const { check, validationResult, body } = require('express-validator')
//import mongoose models
const User = require('../models/user')
const Place = require('../models/place')
const cCase = require('../models/covid_case')
const vReg = require('../models/visit_registration')
const log = require('../models/log')

//Main Route
router.get('/', (req, res )=> {
    const fromReg = req.query.valid
    res.render('login',{
        'page':'login',
        fromReg
    })
})

//Create login Route
router.post('/', async (req, res) => {

    User.findOne({ email : req.body.email }).then( async (user) => {
        if(user){
            if (user.password === req.body.password) {
                if (user.admin){
                    const loginLog = new log({
                        user_id : user._id
                    });
                    
                    //log the admin login
                    loginLog.save((newlog) =>{
                        //login admin
                        res.redirect('login/admin/' + user._id)
                    })

                    
                }else{
                    const loginLog = new log({
                        user_id : user._id
                    });

                    //log the user login
                    loginLog.save((newlog) =>{
                        //login admin
                        res.redirect('login/user/' + user._id)
                    })
                }
            }else{ //an exoun kataxwrithei lathos stoixeia (password)
                const alert = [{ msg: 'Email or Password is not correct'}];
                res.render('login', {
                    'page' : 'login',
                    fromReg : false,
                    alert
                })
            }
        }else{ //an den uparxei o user
            const alert = [{ msg: 'Email or Password is not correct'}];
            res.render('login', {
                'page' : 'login',
                fromReg : false,
                alert
            })
        }
    })


    
})

//User Route 
router.get('/user/:id', async (req, res) => {
    //passing the username id so we know who is the logged in user
    //if it does not exists then redirect to login 
    await User.findOne({_id : req.params.id}).then(async (user) => {
        if (user){
            log.find({user_id : user._id}).sort({createdAt : -1}).exec((err, userlogs) =>{
                cCase.find({user_id : user._id}).sort({date : 1}).exec((err, usercovid) => {
                    const loginHistory = []
                    //get users login history
                    for(let i = 0; i< userlogs.length; i++){
                        const logindate = new Date(userlogs[i].createdAt)
                        const logindata = 
                        {
                            "day" : formatTime(logindate.getDate()),
                            "month" : formatTime(logindate.getMonth() + 1),
                            "year" : logindate.getFullYear(),
                            "hours" : formatTime(logindate.getHours()),
                            "minutes" : formatTime(logindate.getMinutes())
                        }
                        loginHistory.push(logindata)
                    }

                    //get users covid history
                    const covidHistory = []
                    for(let i = 0; i< usercovid.length; i++){
                        const covidDate = new Date(usercovid[i].date)
                        const covidData = 
                        {
                            "day" : formatTime(covidDate.getDate()),
                            "month" : formatTime(covidDate.getMonth() + 1),
                            "year" : covidDate.getFullYear()
                        }
                        covidHistory.push(covidData)
                    }

                    res.render('login/user',{
                        'page' : 'user',
                        user,
                        loginHistory,
                        covidHistory
                    })
                })
            })
        }else{
            res.redirect('/login')
        }
    })
})
router.get('/user', async (req, res) => {
    res.redirect('/login')
})

//route for method post on Covid
router.post('/user/:id/covid',async (req, res) => {
    User.findOne({_id : req.params.id}).then(async (user) => {
        const given_date = new Date(req.body.date)
        cCase.find({user_id : user._id}).sort({date : -1}).exec((error, docs) => {
            //find if the registration date is in the future
            const date = new Date();
            if(given_date > date){
                const alert = [{msg : "Given date must be before tomorrow"}]
                res.render('login/user', {
                    'page' : 'user',
                    user,
                    alert
                })
            }else{
                //find if 14 days have passed  && ta 2 dates einai ton idio xrono && en exoun perasei 14 meres metaxy twn 2 dates
                if(docs[0].date.getFullYear() === given_date.getFullYear() && docs[0].date.getMonth() === given_date.getMonth() && Math.abs(docs[0].date.getDate() - given_date.getDate()) < 14){
                    const alert = [{msg : "There has to be at lease 14 days gap between covid registers"}]
                    res.render('login/user', {
                        'page' : 'user',
                        user,
                        alert
                    })
                }else{
                    //put the given date in db         
                    const covid_case = new cCase({
                        user_id : user._id,
                        date : given_date
                    })
                    const alert = [{msg : "Your covid case has been registered! Be carefull!"}]
                    covid_case.save((newCovidCase) => {
                        res.render('login/user', {
                            'page' : 'user',
                            user,
                            alert
                        })
                    })
                }
            }
        })     
    })
})

//route for method post on EditProfile
router.post('/user/:id/editProfile',[
    //validate new username and password
    body('username').custom((value, { req }) => {
        if(value !== req.body.confirm_username){
            throw new Error('Usernames do not match')
        }
        return true;
    }),
    body('password').custom((value, { req }) => {
        if(value !== req.body.confirm_password){
            throw new Error('Passwords do not match')
        }
        return true;
    })
] , async (req, res) => {

    User.findOne({_id : req.params.id}).then ((user) => {
        const errors = validationResult(req)
            if(!errors.isEmpty()){
                const alert = errors.array()

                res.render('login/user', {
                    'page' : 'user',
                    user,
                    alert
                })
            }else{
                const username = req.body.username
                const password = req.body.password

                if(username == '' && password == ''){
                    alert = [{ msg : 'Username and Password are both empty'}]
                    res.render('login/user', {
                        'page' : 'user',
                        user,
                        alert
                    })
                }else if (username == ''){ //they want to change just the password
                    const regex = /^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#\$%\^&\*])/;
                    alert = []
                    if(req.body.password.length < 8){
                        alert = [{ msg : 'Password must be at least 8 character long'}]
                        res.render('login/user', {
                            'page' : 'user',
                            user,
                            alert
                        })
                    }else if (!regex.test(req.body.password)){
                        alert = [{ msg : 'Password must have at least 1 capital letter, 1 number and 1 symbol'}]
                        res.render('login/user', {
                            'page' : 'user',
                            user,
                            alert
                        })
                    }else{
                        updateUserPassword(req.params.id, password)
                        res.redirect('/login')
                    }
                }else if(password == ''){ //they want to change just the username
                    updateUserUsername(req.params.id, username)
                    res.redirect('/login')
                }else{  //they want to change username & password
                    const regex = /^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#\$%\^&\*])/;
                    alert = []
                    if(req.body.password.length < 8){
                        alert = [{ msg : 'Password must be at least 8 character long'}]
                        res.render('login/user', {
                            'page' : 'user',
                            user,
                            alert
                        })
                    }else if (!regex.test(req.body.password)){
                        alert = [{ msg : 'Password must have at least 1 capital letter, 1 number and 1 symbol'}]
                        res.render('login/user', {
                            'page' : 'user',
                            user,
                            alert
                        })
                    }else{
                        updateUserPassword(req.params.id, password)
                        updateUserUsername(req.params.id, username)
                        res.redirect('/login')
                    }
                }
            }
    })
})

//route for method post on registerVisit
router.post('/user/:id/registerVisit', async (req, res) =>{
    User.findOne({_id : req.params.id}).then ((user) => {
        if(user){
            //get pois name & get place
            const poi = req.body.poiname
            Place.findOne({name : poi}). then((place) => {
                if(place){
                    const poiCrowd = req.body.population
                    if(poiCrowd == ''){
                        const vregistration = new vReg({
                            user_id : user._id,
                            place_id : place._id
                        })
                        vregistration.save((newVregistration) => {
                            const alert = [{msg : "Your visit has been registered"}] 
                            res.render('login/user', {
                                'page' : 'user',
                                user,
                                alert
                            })
                        })
                    }else{
                        const vregistration = new vReg({
                            user_id : user._id,
                            place_id : place._id,
                            crowd_number : poiCrowd
                        })
                        vregistration.save((newVregistration) => {
                            const alert = [{msg : "Your visit has been registered"}] 
                            res.render('login/user', {
                                'page' : 'user',
                                user,
                                alert
                            })
                        })
                    }
                }else{
                    const alert = [{msg : "We could not find the place you are naming"}]
                    res.render('login/user', {
                        'page' : 'user',
                        user,
                        alert
                    })
                }
                
            })
        }else{
            res.redirect('/')
        }
    })
})

//route for method post on covidContact
router.post('/user/:id/covidContact', async (req, res) =>{
    User.findOne({_id : req.params.id}).then((user) => {
        if(user){
            vReg.find({user_id : user._id}).then((userVisits) => {
                if(userVisits){
                    userVisits.forEach(userVisit => {
                        vReg.find({place_id : userVisit.place_id}).then((visits) => {
                            console.log('user : ' + user + ' vRegister : ' + userVisit + ' users have visited : ' + visits);
                        })

                    });
                }else{
                    //user has no registrations
                    const alert = [{msg : 'You have not yet register a visit'}]
                    res.render('login/user', {
                        'page' : 'user',
                        user,
                        alert
                    })
                }
            })
        }else{
            res.redirect('/')
        }
    })
})

//Place Data Route
router.get('/user.json', async (req, res) => {
    const place = await Place.find({})
    res.json(place)
})

//logs Data Route
router.get('/logs.json', async (req, res) => {
    const userlogs = await log.find({})
    res.json(userlogs)
})

//Covid Case Data Route
router.get('/covidCases.json', async (req, res) => {
    const covidCases = await cCase.find({})
    res.json(covidCases)
})

//vis
router.get('/visitReg.json', async (req, res) => {
    const visit_registrations = await vReg.find({})
    res.json(visit_registrations)
})

//Admin Route
router.get('/admin/:id', (req, res) => {
    User.findOne({_id : req.params.id}).then((user) => {
        if (user){
            res.render('login/admin',{
                'page' : 'admin',
                user 
            })
        }else{
            res.redirect('/login')
        }
    })
})

//route for admin updating data
router.post('/admin/:id/upload', async (req, res) =>{
    User.findOne({_id : req.params.id}).then((user) => {
        try{
            const dataToUpload = JSON.parse(req.body.previewUpload)
            
            Place.insertMany(dataToUpload).then(function(){
                const alert = [{ msg: 'Data inserted' }]
                res.render('login/admin',{
                    'page' : 'admin',
                    user,
                    alert
                })
            }).catch(function(error){
                //catch on error on upload if there is one
                const alert = [{ msg: 'There was something wrong with your upload' }]
                res.render('login/admin',{
                    'page' : 'admin',
                    user,
                    alert
                })
            })
        }catch(e){
            //check if the file can be converted to JSON
            const alert = [{ msg: 'The file you are trying to upload is not a JSON file' }]
            res.render('login/admin',{
                'page' : 'admin',
                user,
                alert
            })
            
            
        }
    })
})

//route for admin updating data 
router.post('/admin/:id/update', async (req, res) =>{
    User.findOne({_id : req.params.id}).then((user) => {
        try{
            const dataToUpdate = JSON.parse(req.body.previewUpload)

            dataToUpdate.forEach(data => {
                Place.findOneAndUpdate({_id : data.id}, {$set: [
                    { 
                        populartimes : data.populartimes 
                    }, 
                    { 
                        rating : data.rating 
                    }, 
                    { 
                        rating_n : data.rating_n 
                    }
                ]}).catch(function (e){
                    const alert = [{ msg: 'There was an error with your update, please check your file!' }]
                    res.render('login/admin',{
                        'page' : 'admin',
                        user,
                        alert
                    })
                })
            });

            
        }catch(e){
            const alert = [{ msg: 'The file you are trying to upload is not a JSON file' }]
            res.render('login/admin',{
                'page' : 'admin',
                user,
                alert
            })
        }
    })
})


//route for admin deleting data 
router.post('/admin/:id/delete', async (req, res) =>{
    User.findOne({_id : req.params.id}).then((user) => {
        Place.deleteMany({}).then((user) =>{ 
            const alert = [{ msg: 'All data has been deleted. I hope you are happy :(' }]
            res.render('login/admin',{
                'page' : 'admin',
                user,
                alert
            })
        }).catch( function (e){
            const alert = [{ msg: 'Data could not be deleted. I hope you did not want to destroy the website!!' }]
            res.render('login/admin',{
                'page' : 'admin',
                user,
                alert
            })
        })
    })
})

//helpfull functions
function updateUserUsername(id, newUsername){
    User.findOneAndUpdate({_id : id}, {username : newUsername}, (error) => {
        if(error){
            console.log(error);
        }
    })
}

function updateUserPassword(id, newPassword){
    User.findOneAndUpdate({_id : id}, {password : newPassword}, (error) => {
        if(error){
            console.log(error);
        }
    })
}

function formatTime(time){
    switch(time){
        case 0:
            time = '00'
        break;
        case 1:
            time = '01'
        break;
        case 2:
            time = '02'
        break;
        case 3:
            time = '03'
        break;
        case 4:
            time = '04'
        break;
        case 5:
            time = '05'
        break;
        case 6:
            time = '06'
        break;
        case 7:
            time = '07'
        break;
        case 8:
            time = '08'
        break;
        case 9:
            time = '09'
        break;
    }
    return time;
}
module.exports = router 
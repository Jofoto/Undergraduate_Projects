const express = require('express')
const router = express.Router()
const User = require('../models/user')
const { check, validationResult, body } = require('express-validator')

// Main Route
router.get('/', (req, res )=> {
    res.render('register',{
        'page':'register'
    }), { user : new User() }
})

//Create register Route 
router.post('/',[
        //validating data
        check('password', 'Password must be at least 8 character long').isLength({ min: 8 }),
        check('password', 'Password must have at least 1 capital letter, 1 number and 1 symbol').matches("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#\$%\^&\*])"),
        body('password').custom((value, {req}) =>{
            if(value !== req.body.password_confirm){
                throw new Error('Passwords do not match!')
            }
            return true;
        }), 
        check('email','Email is not valid').isEmail().normalizeEmail(),
        body('username').custom((value, { req }) => {
            if(value !== req.body.username_confirm){
                throw new Error('Usernames do not match!')
            }
            return true;
        })

    ] ,(req, res) => {

    //errors = all the validation errors!
    const errors = validationResult(req)
    if(!errors.isEmpty()){
        //alerts = all the validation errors in array
        const alert = errors.array()
        
        res.render('register', {
            'page' : 'register',
            alert
        })
        
    }else{
        //check if data is already in database
        User.findOne({
            $or:[{
                username : req.body.username
            }, {
                email : req.body.email
            }]
        })
        .then((user) => {
            if(user){
                const alert = [];

                if(user.username === req.body.username){
                    alert.push({ msg : 'Username already in use'})
                }else{
                    alert.push({ msg : 'Email already in use'})
                }
                res.render('register',{
                    'page': 'register',
                    alert
                })
            }else{
                const user = new User({
                    username: req.body.username,
                    password: req.body.password,
                    email: req.body.email
                });
        
                user.save((newUser) => {
                    res.redirect('login?valid=' + encodeURIComponent('true'))
                })
                
            }
        })
    }
});
module.exports = router
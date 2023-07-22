const mongoose = require('mongoose')


const vRegister = new mongoose.Schema({
    user_id:{
        type: String
    },
    place_id:{
        type: String
    },
    crowd_number:{
        type: Number
    }
},{
    timestamps : true
});


module.exports = mongoose.model('visitReg', vRegister)


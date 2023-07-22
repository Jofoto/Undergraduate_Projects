const mongoose = require('mongoose')

const logSchema = new mongoose.Schema({
    user_id : String
},{
    timestamps: true
});

module.exports = mongoose.model('log', logSchema)
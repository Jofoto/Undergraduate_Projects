const mongoose = require('mongoose')

const covidCaseSchema = new mongoose.Schema({
    user_id : String,
    date: Date
})

module.exports = mongoose.model('covidCase', covidCaseSchema)

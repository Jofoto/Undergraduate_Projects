const mongoose = require('mongoose')

const placeSchema = new mongoose.Schema({
    _id: String ,
    name: {type:String, required: true},
    address: {type:String, required: true},
    types: [ {type:String, required: true} ],
    coordinates:{ 
        lat: {type:Number, required: true}, 
        lng: {type:Number, required: true} 
    },
    rating: {type:Number, required: true},
    rating_n: Number,
    current_popularity: Number,
    populartimes:[
        {
            name: {type: String, required: true} ,
            data: [ {type: Number, required: true} ]
        }
    ],
    times_spent: [ {type: Number, required: true} ]
})

module.exports = mongoose.model('place', placeSchema)


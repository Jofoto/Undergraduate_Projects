const express = require('express')
const router = express.Router()

// Main Route
router.get('/', (req, res )=> {
    res.render('about', {
        'page':'about'
    })
})

module.exports = router 
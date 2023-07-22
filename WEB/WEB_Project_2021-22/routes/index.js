const express = require('express')
const router = express.Router()

router.get('/', (req, res )=> {
    res.render('index', {
        'page': 'index'
    })
})

module.exports = router 
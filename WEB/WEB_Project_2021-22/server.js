if (process.env.NODE_ENV !== 'production'){
    require('dotenv').config()
}

const express = require('express')
const app = express()
const expressLayouts = require('express-ejs-layouts')
const bodyParser = require('body-parser')



const indexRouter = require('./routes/index')
const aboutRouter = require('./routes/about')
const loginRouter = require('./routes/login')
const registerRouter = require('./routes/register')

app.set('view engine', 'ejs')
app.set('views', __dirname + '/views')
app.set('layout', 'layouts/layout')
app.use(expressLayouts)
app.use(express.json())
//set static folders
app.use(express.static(__dirname + '/public'))
app.use(express.static(__dirname + '/utils'))
app.use(bodyParser.urlencoded({ limit: '10mb', extended: false }))

const mongoose = require('mongoose')
const req = require('express/lib/request')
mongoose.connect(process.env.DATABASE_URL, { useNewUrlParser: true })

//check connection
const db = mongoose.connection
db.on('error', error => console.error(error))
db.once('open', () => console.log('Connected to Mongoose'))

app.use('/', indexRouter)
app.use('/about', aboutRouter)
app.use('/login', loginRouter)
app.use('/register', registerRouter)

app.listen(process.env.PORT || 3000)
const express = require('express')
const exphbs = require('express-handlebars')
const handlebard = require('handlebars')
const { allowInsecurePrototypeAccess } = require('@handlebars/allow-prototype-access')
const morgan = require('morgan')
const methodOverride = require('method-override')
const path = require('path')

const app = express()

// midldlewars
app.use(express.json())
app.use(morgan('dev'))
app.use(express.urlencoded({extended: false}))
app.use(methodOverride('_method'))

// Setting
app.set("port", process.env.PORT || 5000)
app.set('views', path.join(__dirname, 'views'))
app.engine('.hbs', exphbs({
    defaultLayout: 'main',
    layoutsDir: path.join(app.get('views'), 'layouts'),
    partialsDir: path.join(app.get('views'), 'partials'),
    extname: '.hbs',
    handlebars: allowInsecurePrototypeAccess(handlebard)
}))

app.set('view engine', '.hbs')

// Global Variables

// Route
app.use(require('./routes/index.routes'))
app.use(require('./routes/notes.routes'))

app.use(express.static(path.join(__dirname, '../public')))

module.exports = app
const express = require('express')
const exphbs = require('express-handlebars')
const path = require('path')
const handlebard = require('handlebars')
const { allowInsecurePrototypeAccess } = require('@handlebars/allow-prototype-access')
const morgan = require('morgan')
const methodOverride = require('method-override')
const session = require('express-session')
const flash = require('connect-flash')
const passport = require('passport')

const app = express()
require('./config/passport')

// midldlewars
app.use(express.json())
app.use(morgan('dev'))
app.use(express.urlencoded({extended: false}))
app.use(methodOverride('_method'))
app.use(session({
    secret: 'secret',
    resave: true,
    saveUninitialized: true
}))
app.use(passport.initialize())
app.use(passport.session())
app.use(flash())

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
app.use((req, res, next) => {
    res.locals.success_message = req.flash('success_message')
    res.locals.error_message = req.flash('error_message')
    res.locals.error = req.flash('error')
    res.locals.user = req.user || null
    next();
})

// Route
app.use(require('./routes/index.routes'))
app.use(require('./routes/notes.routes'))
app.use(require('./routes/users.routes'))

app.use(express.static(path.join(__dirname, '../public')))

module.exports = app
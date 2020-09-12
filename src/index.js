const express = require('express')
const exphbs = require('express-handlebars')
const path = require('path')

const app = express()

// midldlewars
app.use(express.json())
app.use(express.urlencoded({extended: false}))

// Setting
app.set("port", process.env.PORT || 5000)
app.set('views', path.join(__dirname, 'views'))
app.engine('.hbs', exphbs({
    defaultLayout: 'main',
    layoutsDir: path.join(app.get('views'), 'layouts'),
    partialsDir: path.join(app.get('views'), 'partials'),
    extname: '.hbs'
}))

app.set('view engine', '.hbs')

// Global Variables

// Route
app.use(require('./routes/index.routes'))
app.use(require('./routes/notes.routes'))

app.use(express.static(path.join(__dirname, '../public')))

module.exports = app
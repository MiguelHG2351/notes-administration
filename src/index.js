const express = require('express')
const path = require('path')

const app = express()

// midldlewars
app.use(express.json())
app.use(express.urlencoded({extended: false}))

// Setting
app.set("port", process.env.PORT || 5000)
app.set('views', path.join(__dirname, 'views'))

// Global Variables

// Route
app.get('/', (req, res) => {
    res.send('Hello World')
    res.status(200)
})

app.use(express.static(path.join(__dirname, '../public')))

module.exports = app
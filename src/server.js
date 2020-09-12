require('dotenv').config()
require('./database/')

const app = require('./index.js')

app.listen(app.get('port'), () => {
    console.log("Hola")
})
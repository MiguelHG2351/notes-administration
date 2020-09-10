const mongoose = require('mongoose')

const { NOTES_APP_MONGODB_HOST, NOTES_APP_MONGODB_DATABASE } = process.env
const MONGOBD_URI = `mongodb://${NOTES_APP_MONGODB_HOST }/${ NOTES_APP_MONGODB_DATABASE }`

console.log(MONGOBD_URI)
mongoose.connect(MONGOBD_URI, {
    useUnifiedTopology: true,
    useNewUrlParser: true
})

.then(db => console.log('la base de datos ha sido actualizada xd'))

.catch(err => console.log(`database disconect! ${err}` ))
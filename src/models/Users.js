const { Schema, model } = require('mongoose')
const bcryp = require('bcryptjs')

const Users = new Schema({
    name: { type: String, required: true },
    email: { type: String, required:true },
    password: { type: String, required: true }
}, {
    timestamps: true
})

Users.methods.encrypPassword = async password => {
    const salt = await bcryp.genSalt(10)
    return await bcryp.hash(password, salt)
}

Users.method.matchPassword = function (password) {
    return bcryp.compare(password, this.password)
}

model('Users', Users)
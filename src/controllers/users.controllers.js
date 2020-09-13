const  userCtrl = {}

const User = require('../models/Users')

userCtrl.renderSingUpForm = (req, res) => {
    res.render('users/singup')
}

userCtrl.singUp = async (req, res) => {
    const errors = []
    const { name, email, confirm_password, password } = req.body
    console.log(password)
    if(password !== confirm_password) {
        errors.push({text: 'Password do not match'})
    }
    if (password.length < 4) {
        errors.push({text: 'Password tiene que ser de más de 4 carácteres'})
    }
    if (errors.length>0) {
        res.render("users/singup", {
            errors,
            name,
            email,
            password,
            confirm_password
        })
    } else {
        const emailUser = await User.findOne({email: email})
        if (emailUser) {
            req.flash('error_message', 'El correo ya existe')
            res.redirect('/users/singup')
        } else {
            const newUser = new User({name, email, password})
            newUser.password = await newUser.encryptPassword(password)
            await newUser.save()
            req.flash('success_message', 'Estas registrado!')
            res.redirect('/users/singin/')
        }
    }
}

userCtrl.renderSingInForm = (req, res) => {
    res.render('users/singin')
}

userCtrl.singIn = (req, res) => {
    res.send('singin')
}

userCtrl.logout = (req, res) => {
    res.send('logout')
}

module.exports = userCtrl
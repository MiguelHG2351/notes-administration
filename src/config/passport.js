const passport = require('passport')
const LocalStrategy = require('passport-local').Strategy

const User = require('../models/Users')

passport.use(new LocalStrategy({
    usernameField: 'email',
    passwordField: 'password'
}, async (email, password, done) => {
    const user = await User.findOne({email})
    if(!user) {
        return done(null, false, {message: 'No user founds'});
    } else {
        const match = await user.matchPassword(password)
        if(match) {
            return done(null, user)
        } else {
            return done(null, false, {message: 'Incorrect password'})
        }
    }
}))

passport.serializeUser((user, done) => {
    done(null, user.id)
})

passport.deserializeUser((id, done) => {
    User.findById(id, (err, user) => {
        done(err, user)
    })
})
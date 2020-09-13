const helpers = {}

helpers.isAuthenticated = (req, res, next) => {
    if(req.isAuthenticated()) {
        return next()
    }
    req.flash('error', 'No estas autotizado')
    res.redirect('/users/singin')
}

module.exports = helpers
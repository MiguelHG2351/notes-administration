const { Router } = require('express')
const router = Router()
const { renderSingInForm, renderSingUpForm, singIn, singUp, logout } = require('../controllers/users.controllers')

router.get('/users/singup', renderSingUpForm)

router.post('/users/singup', singUp)

router.get('/users/singin', renderSingInForm)

router.post('/users/singin', singIn)

router.get('/users/logout', logout)

module.exports = router
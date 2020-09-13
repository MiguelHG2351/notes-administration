const { Router } = require('express')
const router = Router()

const { renderNotesFrom, createNewNotes, renderNotes, renderEditForm, updateNotes, deleteNote } = require('../controllers/notes.controllers.js')

const { isAuthenticated } = require('../helpers/auth')

// new note

router.get('/notes/add', isAuthenticated, renderNotesFrom)
router.post('/notes/new-note', isAuthenticated, createNewNotes)
router.get('/notes', isAuthenticated, renderNotes)

// Edit form

router.get('/notes/edit/:id', isAuthenticated, renderEditForm)
router.put('/notes/edit/:id', isAuthenticated, updateNotes)

// Delete Notes

router.delete('/notes/delete/:id', isAuthenticated, deleteNote)

module.exports = router
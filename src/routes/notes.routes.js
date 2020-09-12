const { Router } = require('express')
const router = Router()

const { renderNotesFrom, createNewNotes, renderNotes, renderEditForm, updateNotes, deleteNote } = require('../controllers/notes.controllers.js')

router.get('/notes/add', renderNotesFrom)
router.post('/notes/new-note', createNewNotes)
router.get('/notes', renderNotes)

// Edit form

router.get('/notes/edit/:id', renderEditForm)
router.put('/notes/edit/:id', updateNotes)

// Delete Notes

router.delete('/notes/delete/:id', deleteNote)

module.exports = router
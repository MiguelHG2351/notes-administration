const notesCtrl = {}

const Note = require('../models/Notes')

notesCtrl.renderNotesFrom = (req, res) => {
    res.render('notes/index')
}

notesCtrl.createNewNotes = (req, res) => {
    const { title, description } = req.body
    const newNote = new Note({title, description})
    newNote.save()
    console.log(newNote)
    res.send('new notes created!')
}

notesCtrl.renderNotes = (req, res) => {
    res.send('render notes')
}

notesCtrl.renderEditForm = (req, res) => {
    res.send('render Edit form')
}

notesCtrl.updateNotes = (req, res) => {
    res.send('update notes')
}

notesCtrl.deleteNote = (req, res) => {
    res.send('delete ntoes')
}

module.exports = notesCtrl
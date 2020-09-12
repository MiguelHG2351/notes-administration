const notesCtrl = {}

const Notes = require('../models/Notes')

notesCtrl.renderNotesFrom = (req, res) => {
    res.render('notes/index')
}

notesCtrl.createNewNotes = async (req, res) => {
    const { title, description } = req.body
    const newNote = new Notes({title, description})
    await newNote.save()
    console.log(newNote)
    res.redirect('/notes')
}

notesCtrl.renderNotes = async (req, res) => {
    const notes = await Notes.find()
    res.render('notes/all-notes', {notes})
}

notesCtrl.renderEditForm = async (req, res) => {
    const note = await Notes.findById(req.params.id)
    res.render('notes/edit-notes', { note })
}

notesCtrl.updateNotes = async (req, res) => {
    const { title, description } = req.body
    console.log(req.params.id)
    await Notes.findByIdAndUpdate(req.params.id, { title, description })
    res.redirect('/notes')
}

notesCtrl.deleteNote = async (req, res) => {
    console.log('hola')
    await Notes.findByIdAndDelete(req.params.id)
    res.redirect('/notes')
}

module.exports = notesCtrl
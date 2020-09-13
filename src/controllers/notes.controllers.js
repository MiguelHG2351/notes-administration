const notesCtrl = {}

const Notes = require('../models/Notes')

notesCtrl.renderNotesFrom = (req, res) => {
    res.render('notes/index')
}

notesCtrl.createNewNotes = async (req, res) => {
    const { title, description } = req.body
    const newNote = new Notes({title, description})
    newNote.user = req.user.id
    await newNote.save()
    req.flash('success_message', 'notes added Succefuly')
    res.redirect('/notes')
}

notesCtrl.renderNotes = async (req, res) => {
    const notes = await Notes.find({user: req.user.id})
    res.render('notes/all-notes', {notes})
}

notesCtrl.renderEditForm = async (req, res) => {
    const note = await Notes.findById(req.params.id)
    console.log(req.user.id)
    if(note.user != req.user.id) {
        req.flash('error', 'No authorized')
        return res.redirect('/notes/')
    }
    res.render('notes/edit-notes', { note })
}

notesCtrl.updateNotes = async (req, res) => {
    const { title, description } = req.body
    console.log(req.params.id)
    await Notes.findByIdAndUpdate(req.params.id, { title, description })
    req.flash('success_message', 'Note Update Succefuly')
    res.redirect('/notes')
}

notesCtrl.deleteNote = async (req, res) => {
    console.log('hola')
    await Notes.findByIdAndDelete(req.params.id)
    req.flash('success_message', 'Note Deleted Succefuly')
    res.redirect('/notes')
}

module.exports = notesCtrl
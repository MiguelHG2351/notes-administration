const indexCtrl = {};

indexCtrl.renderIndex = (req, res) => {
    res.render('index')
    res.status(200)
}

indexCtrl.renderAbout =  (req, res) => {
    res.render('about')
    res.status(200)
}

module.exports = indexCtrl
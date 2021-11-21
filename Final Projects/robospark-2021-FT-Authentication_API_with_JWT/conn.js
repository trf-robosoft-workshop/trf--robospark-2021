const mongoose = require('mongoose')
mongoose.connect("mongodb://localhost:27017/userdetail", {
    useNewUrlParser: true, useUnifiedTopology: true
}).then(() =>
    console.log("connection succesfull......")
).catch((err) =>
    console.log("not succesfull")
)
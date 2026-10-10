const express = require('express');
const app = express();
const port = 3000;

// for the post request
app.use(express.urlencoded({extended: true}));
app.use(express.json());

app.listen(port, (req, res) => {
    console.log(`Server running at ${port}`);
})


app.get("/register", (req, res) => {
    let { user, password } = req.query;
    res.send(`GET request received for user: ${user }, password: ${password}`);
})

app.post("/register", (req, res) => {
    let {user, password } = req.body;
    res.send(`Post request recived : ${user} , password : ${password }`);
})
 


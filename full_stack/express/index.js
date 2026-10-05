const express = require("express");

const app = express();

let port=3000;
app.listen(port, () => {
    console.log(`Server is running on ${port}`);
});


// Middleware to handle requests
// app.use((req,res) => {
//     console.log("Request received");
//     res.send("Hello World");
// })

//handle GET request
app.get("/", (req,res) => {
    console.log("Request received");
    res.send("Hello World");
});

app.get("/about", (req,res) => {
    res.send("About Us");
    console.log("Request received");
});

app.get("/contact", (req,res) => {
    res.send("Contact Us");
    console.log("Request received");
})


//user send response to anther path they will not create  then use

app.get("*", (req,res)=> {
    res.send("404 Not Found");
    console.log("Request received");
})
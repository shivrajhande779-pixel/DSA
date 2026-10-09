const express=require("express");
const path=require("path");
const app = express();

let port = 3000;

app.listen(port,()=>{
    console.log("Server is running on port " + port);
})




app.set("view engine","ejs");
app.set("views", path.join(__dirname,"/views"));

//home
app.get("/",(req,res)=>{
    res.send("this is a home page");
})


//conting like db 

app.get("/roll" , (req,res)=>{
    let dicval=Math.floor(Math.random()*6)+1;
    res.render("roll.ejs",{dicval});
})
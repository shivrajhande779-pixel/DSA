h1=document.querySelector('h1');

function savetoDB(data, success, failure){
    let internetspeed=Math.floor(Math.random()*10)+1;
    if(internetspeed>5){
        success();
    }else{
        failure();
    }
}

savetoDB("milstone", ()=> {
    console.log("data saved to DB");
}, ()=>{
    console.log("error while saving data to DB");
});
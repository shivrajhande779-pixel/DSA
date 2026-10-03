

function demo() {
     return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("hello");
            resolve();
        },1000)
     })
}



async function getData() {
    await demo();
    await demo();
    demo();
}






let h1=document.querySelector("h1");


function color(color, time) {
    return new Promise((resolve, reject) =>{
        setTimeout(() => {
            h1.style.color = color;
            console.log(color);
            console.log("color changed");
            resolve(); 
        }, time);
    })
}

async function colorChange() {
    await color("pink", 2000);
    await color("blue", 3000);
    await color("green", 5000);
    await color("yellow", 2000);
    await color("orange", 2500);
    await color("red", 3000);
    await color("purple", 2000);
}


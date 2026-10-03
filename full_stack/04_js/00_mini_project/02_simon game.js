let gamesqe=[];
let usersqe=[];

let btns=["red","yellow","green","blue"];


let started=false;
let level=0;

let h2=document.querySelector("h2");



document.addEventListener("keypress",function(){
    if(started==false){
        console.log("Game started!");
        started=true;
    levelup();
    }
});

function btnflash(btn){
    btn.classList.add("flash");
    setTimeout(function(){
        btn.classList.remove("flash");
    }, 500); 
}

function levelup(){
    level++;
    h2.innerText="Level " + level;

    let randidx=Math.floor(Math.random()*3);
    let randColor=btns[randidx];
    let randbtn=document.querySelector(`.${randColor}`);

    console.log(randColor);
    console.log(randbtn);
    console.log(randidx);

    btnflash(randbtn);
}

function btunpress(){
    let btn= this;
    btnflash(btn);
}

let allbtns=document.querySelectorAll(".btn");
for(btn of allbtns){
    btn.addEventListener("click",btunpress);
}
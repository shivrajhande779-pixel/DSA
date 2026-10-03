let inp=document.querySelector('input');

inp.addEventListener('keydown',function(event){
    console.log("code =",event.code);

    if(event.code=="ArrowUp"){ // we as use KeyW,A,S,D
        console.log("Character moved up");
    }
    else if(event.code=="ArrowDown"){
        console.log("Character moved down");
    } 
    else if(event.code=="ArrowRight"){
        console.log("Character moved right");
    }
    else if(event.code=="ArrowLeft"){ 
        console.log("Character moved left");
    }
})
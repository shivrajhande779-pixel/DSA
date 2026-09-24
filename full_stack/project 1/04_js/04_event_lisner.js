let inp=document.querySelector('input');

inp.addEventListener('keydown',function(event){
    console.log(event);
    console.log(event.key);
    console.log(event.code);  
    console.log("Key pressed");
})
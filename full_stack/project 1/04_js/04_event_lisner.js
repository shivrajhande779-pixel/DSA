let inp=document.querySelector('input');
let btn=document.querySelector('button');

inp.addEventListener('keydown',function(event){
    console.log(event);
    console.log(event.key);
    console.log(event.code);  
    console.log("Key pressed");
})

btn.addEventListener('click', function(event){
    btn.innerText="clicked";
});
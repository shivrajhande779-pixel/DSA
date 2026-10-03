let btn= document.querySelector("button");
let inp= document.querySelector("input");
let ul= document.querySelector("ul");

btn.addEventListener("click", function(){

    let li= document.createElement("li");
    li.innerText= inp.value;
    ul.appendChild(li);
    inp.value= "";

    let delbtn= document.createElement("button");
    delbtn.innerText="delete";
    delbtn.classList.add(delete);

    li.appendChild(delbtn);
    ul.appendChild(li);
    
})  
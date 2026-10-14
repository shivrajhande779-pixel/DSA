
function person(name, age) {
    this.name=name;
    this.age=age;
    console.log(this);
}

person.prototype.talk = function (){
    console.log(`This is a talk function user name : ${this.name,this.age}`);
}

let p1=new person("shivraj",21);
let p2=new person("hippo",18);



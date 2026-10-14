// class person{
//     constructor(name,age,marks){
//         this.name=name;
//         this.age=age;
//         this.marks= marks;
//     }
//     talk(){
//         console.log(`This is a talk function user name : ${this.name}, age : ${this.age}`);
//     }
// }

// let p1=new person("saurabh",19);
// let p2=new person("shivraj",21);

class Person{
    constructor(name,age){
        console.log("person constructor");
        this.name=name;
        this.age=age;
    }
    talk(){
        console.log(`Hi, I am ${this.name}`);
    }
}

class Student extends Person{
    constructor(name,age,marks) {
        console.log("student class");
        super(name,age); //parent class constructor is being called
        this.marks=marks;
    }
}

class Teacher extends Person{
    constructor(name,age,subject) {
        console.log("student class");
        super(name,age); //parent class constructor is being called
        this.subject=subject;
    }
}
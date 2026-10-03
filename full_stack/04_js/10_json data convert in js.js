//json data to js object

let josnres='{"fact" : "The first computer virus was created in 1983 and was called the ","length": 78}';

let validres = JSON.parse(josnres);
console.log(validres);




//js object to json data
let student = {
    name: "shivraj",
    age: 20,
    city: "pune"
}

let jsondata = JSON.stringify(student);
console.log(jsondata);
 
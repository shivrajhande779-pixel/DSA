// // for array letter convert upper word

const name=["gagan","ishan","yogesh"];

const lower=name.map(word => word.toUpperCase(name));

console.log(lower);


// print only you want
let product=[
    { id: 1,name : "laptop"},
     { id: 1,name : "samrtphone"},
      { id: 1,name : "TV"},
]
const q2=product.map(product =>product.name);
console.log(q2);

// above the 18

let user=[
    { names : "A", age : 18},
     { names : "B", age : 20},
     { names :"C", age :21},
];

let q3arr= user.filter(user =>user.age > 18); 
console.log(q3arr);


// get square of even number

const number1= [,1,2,3,4,5,6,7,8];

const result = number1
  .filter(num => num % 2 === 0) // even numbers
  .map(num => num * num);       // square them

console.log(result);

// 
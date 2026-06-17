// ! 1.Student Average Calculator
    //  Calculate  average marks for all students 
    //  Returns an array containing student names and averages

const details=[{name:"John",marks:[80,90,85]},{name:"Emma",marks:[95,92,98]},{name:"John",marks:[60,70,65]}
]
const avg=details.map(student =>
    {
    const total=student.marks.reduce((sum,mark)=> sum+mark,0);
    return{
        name: student.name,
        average: total/student.marks.length
    };
});

console.log(avg);


// ! 2.Total revenue
    //  Find total Revenue from all sales 

sales_data=[{category:"Electronics",amount:500},{category:"Books",amount:100},{category:"Electronics",amount:300},{category:"Clothing",amount:200}];

const totalRevenue = sales_data.reduce((sum, item) => {
  return sum + item.amount;
}, 0);

console.log("Total Revenue:", totalRevenue);




// ! 3.Count words
    // Convert all words into lowercase
    // Count how many times the word "fox" appears.


const phrase= "The fox is quick. The fox is smart." ;
// * Convert into  lowercase
const lower=phrase.toLowerCase(phrase);
console.log(lower)

// Count number of fox in phrase
const count=phrase.split('fox').length-1;
console.log(count)


// ! 4. Employee Salary List 
    // Extract only employee salaries.  
    //  Find the total salary paid. 

emp_sales=[ 
{ name: "A", salary: 50000 }, 
{ name: "B", salary: 40000 }, 
{ name: "C", salary: 60000 }
];

// * Only salary
const only_salary=emp_sales.map(emp => emp.salary);
console.log("Only Slaray of each Employe:",only_salary);

// * Total salary 

const total=emp_sales.reduce((sum,item) =>{
    return sum+=item.salary;
},0);
console.log("Total Salary grid:",total);




// ! 5. Available Products
   
const products=[ 
{ name: "Laptop", stock: 5 }, 
{ name: "Phone", stock: 0 }, 
{ name: "Tablet", stock: 10 }];


const removed=products.filter(products => products.stock >0);
// * Return the names pf available products
console.log(removed)



// ! 6.Post Likes Analysis
    
const post_like=[ 
{ postId: 1, likes: 100 }, 
{ postId: 2, likes: 200 } ]


const total_like=post_like.reduce((sum,item) =>{
    return sum+=item.likes;
},0)

console.log(total_like)



// ! 7. Highly Rated Movies 
    
const movies=[ 
{ title: "Movie A", rating: 8.5 }, 
{ title: "Movie B", rating: 6.0 }]


const highly_rated=movies.filter(movies => movies.rating > 8);
console.log(highly_rated)

const only_title=movies.map(movies => movies.title);
console.log("Only Title ",only_title)




// ! 8. Customer Spending 
   

const customers_spending=[ 
{ customer: "John", amount: 50000 }, 
{ customer: "Emma", amount: 20000 }]

const total_spending=customers_spending.reduce((sum,item) =>{
    return sum+=item.amount;
},0)

console.log("Total spending:",total_spending)



// !9. Bank Transactions 
    // Find total credit amount only.  
const bank=[ 
{ type: "credit", amount: 1000 }, 
{ type: "debit", amount: 300 }, 
{ type: "credit", amount: 500 }]


const total_credit=bank.reduce((sum,item) =>{
    return sum+=item.amount;
},0)

console.log("Total Credit",total_credit)


// ! 10. User Actions
    // Count how many users performed "login". 
const user_action=[ 
{ user: "A", action: "login" }, 
{ user: "B", action: "logout" }, 
{ user: "C", action: "login" }]

const loginCount = user_action.filter(item => item.action === "login").length;
console.log("Number of logins:", loginCount);


// ! 11. GitHub Stars
    //Find the total number of stars.   
github=[  
{ repo: "A", stars: 100 }, 
{ repo: "B", stars: 200 } ];

const total1=github.map(emp=>emp.stars);
const cout=total1.reduce((sum,item)=>sum+item,0);
console.log(cout);

// ! 12. Product Prices 
    //  Extract all prices.  
    //  Find the highest price. 
product_list=[ 
{ name: "Laptop", price: 50000 }, 
{ name: "Phone", price: 20000 }, 
{ name: "Tablet", price: 15000 } ];

const tt=product_list.map(emp=>emp.price)
const oo=tt.reduce((sum,item)=>sum+item,0);
console.log(oo);
hp=Math.max(...tt)
console.log(hp)

// ! 13. Even Numbers
    //   Keep only even numbers.  
    //   Return their squares.  

Even_Numbers =[1, 2, 3, 4, 5, 6];


const en=Even_Numbers.map(emp=>emp.Even_Numbers)
//   Keep only even numbers.  
for(i of Even_Numbers){
    if(i%2==0){
        console.log('only even',i);
    }
} 
//  Return their squares.  
for(i of Even_Numbers){
    if(i%2==0){
        console.log('their squares',i*i);
    }
} 

// ! 14. Student Marks
    // Keep marks greater than 50.  
    //  Find their average. 
    
Student_Marks=[45, 80, 60, 90, 30];
const s1=Student_Marks.filter(gg=>gg> 50);
console.log(s1);
const avg2=Student_Marks.map(item=>item);
const total7=avg2.reduce((sum,item)=>sum+item,0);
const length=avg2.length
console.log('Avg= ',total7/length)

// ! 15. Shopping Cart
    // Calculate total cart value. 
Shopping_Cart =[  
{ item: "Book", price: 200 }, 
{ item: "Pen", price: 20 }, 
{ item: "Bag", price: 500 } ];

const ff=Shopping_Cart.map(item=>item.price);
const t5=ff.reduce((sum,item)=>sum+item,0)
console.log('total= ',t5);

// ! 16. Names List
    //  Convert all names to uppercase.  
Names_List= ["john", "emma", "alex"];
const toupp=Names_List.map(name=>name.toUpperCase());
console.log(toupp);


// ! 17. Numbers Sum 
    // Find the sum of all numbers using reduce().
Numbers_Sum =[10, 20, 30, 40];
const t6=Numbers_Sum.map(item=>item);
const ans=t6.reduce((sum,item)=>sum+item,0) ;
console.log(ans);


// ! 18. Adult Users
    // Keep users whose age is 18 or above.  
    //  Return their names. 
Adult =[ 
{ name: "John", age: 25 }, 
{ name: "Emma", age: 16 }, 
{ name: "Alex", age: 20 } ];

const aaa= Adult.filter(item=>item.age >18);
console.log(aaa);


// ! 19. Product Discount
    // Apply a 10% discount to every product.  
    // Return the updated prices. 
const products = [ 
  { name: "Laptop", price: 50000 }, 
  { name: "Phone", price: 20000 } 
];
const discountedProducts = products.map(product => {
  return {
    name: product.name,
    price: product.price * 0.90 
  };
});
console.log(discountedProducts);
const updatedPricesOnly = discountedProducts.map(p => p.price);
console.log(updatedPricesOnly);


// ! 20. Exam Results
    // Keep students with marks ≥ 50.  
    //  Return their names. 
Exam = [  
{ name: "John", marks: 80 }, 
{ name: "Emma", marks: 40 }, 
{ name: "Alex", marks: 70 } ];


const examm=Exam.map(item=>{
    return {
        name:item.name,
        marks:item.marks >=50
    }
});
console.log(examm)
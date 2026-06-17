const sales = [
  { category: "Electronics", amount: 500 },
  { category: "Books", amount: 100 },
  { category: "Electronics", amount: 300 }
];

const totalRevenue = sales.reduce((sum, sale) => sum + sale.amount, 0);

console.log("Total Revenue:", totalRevenue);


//3 counter 

const set = "The fox is quick. The fox is smart.";
const lower = set.toLowerCase(set);
console.log(lower);

const counting=set.split('fox').length-1;
console.log(counting)


//4 emoploy sale

emp_sales=[ 
{ name: "A", salary: 50000 }, 
{ name: "B", salary: 40000 }, 
{ name: "C", salary: 60000 }
];


const only_salary=emp_sales.map(emp => emp.salary);
console.log("Only Slaray of each Employe:",only_salary);



const total=emp_sales.reduce((sum,item) =>{
    return sum+=item.salary;
},0);
console.log("Total Salary :",total);


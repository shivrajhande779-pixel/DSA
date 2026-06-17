const prompt = require("prompt-sync")();
let students = [];

for (let i = 0; i < 2; i++) {
    let name = prompt("Enter student name:");

    let mark1 = Number(prompt("marks1:"));
    let mark2 = Number(prompt("marks2:"));
    let mark3 = Number(prompt("marks3:"));

    let avg = (mark1 + mark2 + mark3) / 3;

    students.push({
        name,
        average: avg
    });
}

console.log(students);
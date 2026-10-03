let names = [];
let numbers = [];

for (let i = 0; i < 2; i++) {
    names[i] = prompt(`Name ${i + 1} enter karo:`);

    numbers[i] = [];
    for (let j = 0; j < 3; j++) {
        numbers[i][j] = Number(prompt(`Number ${j + 1} enter karo:`));
    }
}

console.log(names);
console.log(numbers);
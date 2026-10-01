
h1=document.querySelector('h1');

function colorchange(color, time) {
    return new Promise((resolve) => {
        setTimeout(() => {
            document.body.style.backgroundColor = color;
            resolve();
        }, time);
    });
}


colorchange("red",1000)
.then(() => {
    console.log("Color changed to red");
    return colorchange("green",1000);
})
.then(() => {
    console.log("Color changed to green");
    return colorchange("blue",1000);
});
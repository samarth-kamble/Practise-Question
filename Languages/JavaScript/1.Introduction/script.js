console.log("Hello, World!");

let a = 5;
let b = 10;

let sum = a + b;

console.log("The sum of a and b is: " + sum);

// const 
const pi = 3.14159;
console.log("The value of pi is: " + pi);

// pi = 3.14; // This will throw an error because pi is a constant 

var c = 15;
console.log("The value of c is: " + c);

// Temperal Dead Zone (TDZ) example
// function exampleTDZ() {
//     console.log(x); // ReferenceError: Cannot access 'x' before initialization
//     let x = 10;
// }

// exampleTDZ();



// Hoisting example
console.log(hoistedVar); // undefined
// console.log(hoistedFunction()); // This will work because function declarations are hoisted
var hoistedVar = "I am hoisted!";

function hoistedFunction() {
    console.log("I am a hoisted function!");
}

hoistedFunction(); // This will work because function declarations are hoisted

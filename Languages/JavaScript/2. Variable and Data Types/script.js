/* Variable and Data Types in JavaScript */

var name = "John"; // String
var age = 30; // Number
var isStudent = true; // Boolean


console.log("Name:", name);
console.log("Age:", age);
console.log("Is Student:", isStudent);


let firstName = "Jane"; // String
let lastName = "Doe"; // String

const pi = 3.14159; // Constant Number

console.log("First Name:", firstName);
console.log("Last Name:", lastName);
console.log("Value of pi:", pi);

// Data Types
let number = 42; // Number
let string = "Hello, World!"; // String
let boolean = false; // Boolean
let object = { key: "value" }; // Object
let array = [1, 2, 3, 4, 5]; // Array
let nullValue = null; // Null
let undefinedValue; // Undefined

console.log("Number:", number);
console.log("String:", string);
console.log("Boolean:", boolean);
console.log("Object:", object);
console.log("Array:", array);
console.log("Null Value:", nullValue);
console.log("Undefined Value:", undefinedValue);

// typeof operator
console.log("Type of number:", typeof number);
console.log("Type of string:", typeof string);
console.log("Type of boolean:", typeof boolean);
console.log("Type of object:", typeof object);
console.log("Type of array:", typeof array);
console.log("Type of nullValue:", typeof nullValue); // Note: This will return "object" due to a historical bug in JavaScript
console.log("Type of undefinedValue:", typeof undefinedValue);

// bigint
let bigIntValue = 9007199254740991n; // BigInt n means it's a BigInt literal    
console.log("BigInt Value:", bigIntValue);
console.log("Type of bigIntValue:", typeof bigIntValue);

// Symbol
let symbolValue = Symbol("unique");
console.log("Symbol Value:", symbolValue);
console.log("Type of symbolValue:", typeof symbolValue);

let id = Symbol("id");
let id2 = Symbol("id");
console.log("Are id and id2 equal?", id === id2); // false, because each Symbol is unique
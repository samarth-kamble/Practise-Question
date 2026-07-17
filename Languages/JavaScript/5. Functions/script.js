/*
 *5. Functions
 * Funcrtions are reusable blocks of code that perform a specific task. They can take inputs (parameters) and return outputs (values). Functions help in organizing code, making it more readable and maintainable.
 */

// Function Declaration
function greet(name) {
  // greet is the function name, and name is a parameter
  return "Hello, " + name + "!";
  // return statement is used to send a value back to the caller
}

console.log(greet("Alice")); // Hello, Alice!

/*
 * Types of Functions:
 *  1. Function Declaration: A named function defined using the function keyword.
 *  2. Function Expression: A function defined and assigned to a variable.
 *  3. Arrow Function: A shorter syntax for writing functions using the => syntax.
 */

// 1. Function Declaration
function add(a, b) {
  return a + b;
}

console.log("Function Declaration Example:");
console.log("The sum of 5 and 10 is: " + add(5, 10)); // The sum of 5 and 10 is: 15

// 2. Function Expression
const addExpression = function (a, b) {
  return a + b;
};

console.log("Function Expression Example:");
console.log("The sum of 5 and 10 is: " + addExpression(5, 10)); // The sum of 5 and 10 is: 15

// 3. Arrow Function
const multiply = (a, b) => {
  return a * b;
};

console.log("Arrow Function Example:");
console.log("The product of 5 and 10 is: " + multiply(5, 10)); // The product of 5 and 10 is: 50

// 4. Parameter and return value
function greetUser(name) {
  return "Hello, " + name + "!";
}
let msg = greetUser("Bob");
console.log("Parameter and Return Value Example:");
console.log(msg); // Hello, Bob!

// 5. Default Parameters
function greetWithDefault(name = "Guest") {
  return "Hello, " + name + "!";
}

console.log("Default Parameters Example:");
console.log(greetWithDefault()); // Hello, Guest!
console.log(greetWithDefault("Charlie")); // Hello, Charlie!

// 6. Rest Parameters (...)
function sumAll(...numbers) {
  // The ...numbers syntax allows the function to accept an indefinite number of arguments as an array
  return numbers.reduce((acc, curr) => acc + curr, 0);
  // reduce is used to sum all the numbers in the array
  // acc is the accumulator, curr is the current value being processed
  // 0 is the initial value of the accumulator
}

console.log("Rest Parameters Example:");
console.log("The sum of 1, 2, 3, and 4 is: " + sumAll(1, 2, 3, 4)); // The sum of 1, 2, 3, and 4 is: 10

// 7. Both Default and Rest Parameters
function greetWithRest(greeting = "Hello", ...names) {
  return greeting + ", " + names.join(", ") + "!";
  // join is used to concatenate the names array into a single string, separated by commas
}

console.log("Default and Rest Parameters Example:");
console.log(greetWithRest("Hi", "Alice", "Bob", "Charlie"));

// 8. Immediate Invoked Function Expression (IIFE)
(function () {
  console.log(
    "IIFE Example: This function runs immediately after it's defined!",
  );
})();

// 9. Anonymous Function
const anonymousFunction = function () {
  console.log("Anonymous Function Example: This is an anonymous function!");
};

anonymousFunction();

// 10. Higher-Order Functions
function higherOrderFunction(callback) {
  // A higher-order function is a function that takes another function as an argument or returns a function
  console.log("Higher-Order Function Example:");
  callback(); // Call the callback function
}

higherOrderFunction(function () {
  console.log("Callback Function Example: This is the callback function!");
});

// 11. Async Functions
async function asyncFunction() {
  // An async function is a function that returns a Promise and allows the use of await within it
  return "Async Function Example: This is an async function!";
}

asyncFunction().then((result) => console.log(result));

// 12. Object Methods
const person = {
  name: "John",
  greet: function () {
    // greet is a method of the person object
    return "Hello, " + this.name + "!"; // this refers to the person object
  },
};

console.log("Object Method Example:");
console.log(person.greet()); // Hello, John!

// 13. Argument, parameter, and return value
function calculateArea(length, width) {
  // length and width are parameters
  return length * width; // return value is the area
}

let area = calculateArea(5, 10); // 5 and 10 are arguments
console.log("Argument, Parameter, and Return Value Example:");
console.log("The area of the rectangle is: " + area); // The area of the rectangle is: 50

// 14. Callback Functions
function fetchData(callback) {
  // Simulating an asynchronous operation using setTimeout
  setTimeout(() => {
    const data = "Fetched Data";
    callback(data); // Call the callback function with the fetched data
  }, 1000);
}

console.log("Callback Function Example:");
fetchData(function (data) {
  console.log(data); // Fetched Data
});

// 15. closure
function outerFunction(outerVariable) {
  // outerVariable is a parameter of the outer function
  return function innerFunction(innerVariable) {
    // innerVariable is a parameter of the inner function
    console.log(
      "Closure Example: Outer Variable: " +
        outerVariable +
        ", Inner Variable: " +
        innerVariable,
    );
  };
}

const closureExample = outerFunction("I am from the outer function");
closureExample("I am from the inner function");

// 16. First Class Functions
// In JavaScript, functions are first-class citizens, meaning they can be treated like any other value (assigned to variables, passed as arguments, returned from other functions).
const firstClassFunction = function () {
  console.log(
    "First-Class Function Example: Functions can be treated as values!",
  );
};
firstClassFunction();

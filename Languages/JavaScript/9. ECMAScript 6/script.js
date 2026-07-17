// 9. EcmaScript 6 (ES6) Features
// 1. Let and Const
let x = 10; // 'let' allows block-scoped variable declaration
const y = 20; // 'const' allows block-scoped constant declaration

console.log("Let and Const Example:");
console.log("x: " + x); // x: 10
console.log("y: " + y); // y: 20

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

// 4. Template Literals
const name = "Alice";
const greeting = `Hello, ${name}! Welcome to ES6.`;

console.log("Template Literals Example:");
console.log(greeting); // Hello, Alice! Welcome to ES6.

// 5. Destructuring Assignment
const person = { firstName: "John", lastName: "Doe" };
const { firstName, lastName } = person;

console.log("Destructuring Assignment Example:");
console.log("First Name: " + firstName); // First Name: John
console.log("Last Name: " + lastName); // Last Name: Doe

// 6. Default Parameters
function greetWithDefault(name = "Guest") {
  return `Hello, ${name}!`;
}

console.log("Default Parameters Example:");
console.log(greetWithDefault()); // Hello, Guest!
console.log(greetWithDefault("Charlie")); // Hello, Charlie!

// 7. Rest Parameters
function sum(...numbers) {
  return numbers.reduce((total, num) => total + num, 0);
}

console.log("Rest Parameters Example:");
console.log("The sum of 1, 2, 3 is: " + sum(1, 2, 3)); // The sum of 1, 2, 3 is: 6

// 8. Spread Operator
const arr1 = [1, 2, 3];
const arr2 = [...arr1, 4, 5];

console.log("Spread Operator Example:");
console.log("arr2: " + arr2); // arr2: 1,2,3,4,5

// 9. Classes
class Person {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  greet() {
    return `Hello, my name is ${this.name} and I am ${this.age} years old.`;
  }
}

const person1 = new Person("Alice", 30);
console.log("Classes Example:");
console.log(person1.greet()); // Hello, my name is Alice and I am 30 years old.

// 10. Modules (ES6 Modules)
// Note: This example assumes you are using a module system like Node.js or a bundler like Webpack.
// In a real-world scenario, you would have separate files for modules and import/export them accordingly.

// Exporting a function from a module (in a file named 'math.js')
// export function add(a, b) {
//   return a + b;
// }

// Importing the function in another file (e.g., 'main.js')
// import { add } from './math.js';

// console.log("Modules Example:");
// console.log("The sum of 5 and 10 is: " + add(5, 10)); // The sum of 5 and 10 is: 15

// 11. Promises
const promise = new Promise((resolve, reject) => {
  const success = true; // Change this to false to see the rejection case
  if (success) {
    resolve("Promise resolved successfully!");
  } else {
    reject("Promise rejected.");
  }
});

console.log("Promises Example:");
promise
  .then((message) => {
    console.log(message); // Promise resolved successfully!
  })
  .catch((error) => {
    console.error(error); // Promise rejected.
  });

// 12. Async/Await
async function fetchData() {
  try {
    const response = await fetch(
      "https://jsonplaceholder.typicode.com/posts/1",
    );
    const data = await response.json();
    console.log("Async/Await Example:");
    console.log(data); // Logs the fetched data
  } catch (error) {
    console.error("Error fetching data:", error);
  }
}

fetchData();

// 13. Generators
function* generatorFunction() {
  yield 1;
  yield 2;
  yield 3;
}

const generator = generatorFunction();

console.log("Generators Example:");
console.log(generator.next().value); // 1
console.log(generator.next().value); // 2
console.log(generator.next().value); // 3
console.log(generator.next().done); // true

// 14. Map and Set
const myMap = new Map();
myMap.set("key1", "value1");
myMap.set("key2", "value2");

console.log("Map Example:");
console.log(myMap.get("key1")); // value1
console.log(myMap.has("key2")); // true

const mySet = new Set();
mySet.add(1);
mySet.add(2);
mySet.add(2); // Duplicate values are ignored

console.log("Set Example:");
console.log(mySet.has(1)); // true
console.log(mySet.size); // 2

// 15. Symbol
const mySymbol = Symbol("mySymbol");

console.log("Symbol Example:");
console.log(mySymbol); // Symbol(mySymbol)

// 16. Iterators
const myArray = [1, 2, 3];
const iterator = myArray[Symbol.iterator]();

console.log("Iterators Example:");
console.log(iterator.next().value); // 1
console.log(iterator.next().value); // 2
console.log(iterator.next().value); // 3
console.log(iterator.next().done); // true

// 17. WeakMap and WeakSet means they are used to store weak references to objects
const weakMap = new WeakMap();
const objKey = {};
weakMap.set(objKey, "value");

console.log("WeakMap Example:");
console.log(weakMap.get(objKey)); // value

const weakSet = new WeakSet();
const objValue = {};
weakSet.add(objValue);

console.log("WeakSet Example:");
console.log(weakSet.has(objValue)); // true

// 18. Optional Chaining
const user = {
  name: "Alice",
  address: {
    city: "Wonderland",
  },
};

console.log("Optional Chaining Example:");
console.log(user?.address?.city); // Wonderland
console.log(user?.contact?.phone); // undefined

// 19. Nullish Coalescing Operator
const value = null;
const defaultValue = "Default Value";

console.log("Nullish Coalescing Operator Example:");
console.log(value ?? defaultValue); // Default Value

// 20. BigInt
const bigIntValue = 1234567890123456789012345678901234567890n;

console.log("BigInt Example:");
console.log(bigIntValue); // 1234567890123456789012345678901234567890n

// 21. Dynamic Import
// Note: This example assumes you are using a module system like Node.js or a bundler like Webpack.
// In a real-world scenario, you would have separate files for modules and import/export them accordingly.

// Dynamic import of a module (in a file named 'math.js')
// export function add(a, b) {
//   return a + b;
// }

// Dynamic import in another file (e.g., 'main.js')
// (async () => {
//   const mathModule = await import('./math.js');
//   console.log("Dynamic Import Example:");
//   console.log("The sum of 5 and 10 is: " + mathModule.add(5, 10)); // The sum of 5 and 10 is: 15
// })();

// 22. Conclusion
console.log("ECMAScript 6 (ES6) Features Demonstration Completed.");

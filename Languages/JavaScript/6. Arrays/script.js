/* Arrays in JavaScript */

// 1. Creating an array
let fruits = ["Apple", "Banana", "Cherry"];
console.log("Fruits Array:", fruits);

// 2. Accessing array elements
console.log("First fruit:", fruits[0]); // Apple
console.log("Second fruit:", fruits[1]); // Banana

// 3. Modifying array elements
fruits[1] = "Blueberry";
console.log("Modified Fruits Array:", fruits);

// 4. Array length
console.log("Number of fruits:", fruits.length);

// 5. Adding elements to an array
fruits.push("Date");
console.log("After adding a fruit:", fruits);

// 6. Removing elements from an array
fruits.pop();
console.log("After removing the last fruit:", fruits);

// 7. Iterating over an array
console.log("Iterating over the fruits array:");
for (let i = 0; i < fruits.length; i++) {
  console.log(fruits[i]);
}

// 8. Using forEach method
console.log("Using forEach method:");
fruits.forEach((fruit) => {
  console.log(fruit);
});

// 9. Array methods: map, filter, reduce
let numbers = [1, 2, 3, 4, 5];

// map
let squaredNumbers = numbers.map((num) => num * num);
console.log("Squared Numbers:", squaredNumbers);

// filter
let evenNumbers = numbers.filter((num) => num % 2 === 0);
console.log("Even Numbers:", evenNumbers);

// reduce
let sum = numbers.reduce((acc, curr) => acc + curr, 0);
console.log("Sum of Numbers:", sum);

// 10. Array Methods : find, sort, slice, splice
// find
let foundNumber = numbers.find((num) => num > 3);
console.log("First number greater than 3:", foundNumber);

// sort
let sortedNumbers = [...numbers].sort((a, b) => b - a); // Descending order
console.log("Sorted Numbers (Descending):", sortedNumbers);

// slice
let slicedNumbers = numbers.slice(1, 4); // From index 1 to 3
console.log("Sliced Numbers (index 1 to 3):", slicedNumbers);

// splice
let splicedNumbers = [...numbers]; // Create a copy to avoid modifying the original array
splicedNumbers.splice(2, 2, 10, 20); // Remove 2 elements from index 2 and add 10 and 20
console.log("Spliced Numbers (after removing and adding):", splicedNumbers);

// 11. Multidimensional Arrays
let matrix = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];

console.log("Multidimensional Array (Matrix):", matrix);
console.log("Element at row 1, column 2:", matrix[1][2]); // 6

// 12. Array Destructuring -> Destructuring assignment allows you to unpack values from arrays into distinct variables.
let [firstFruit, secondFruit, ...otherFruits] = fruits;
console.log("First Fruit:", firstFruit);
console.log("Second Fruit:", secondFruit);
console.log("Other Fruits:", otherFruits);

// 13. Spread Operator -> The spread operator allows an iterable such as an array to be expanded in places where zero or more arguments (for function calls) or elements (for array literals) are expected.
let moreFruits = ["Elderberry", "Fig", "Grape"];
let allFruits = [...fruits, ...moreFruits];
console.log("All Fruits (using spread operator):", allFruits);

// 14. Array.from() -> The Array.from() method creates a new, shallow-copied Array instance from an array-like or iterable object.
let str = "Hello";
let charArray = Array.from(str);
console.log("Array from string:", charArray);

// 15. Array.isArray() -> The Array.isArray() method determines whether the passed value is an Array.
console.log("Is fruits an array?", Array.isArray(fruits)); // true
console.log("Is str an array?", Array.isArray(str)); // false

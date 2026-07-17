/* 4. Control Flow and Loops */

// 1. If-Else Statement
let number = 10;

if (number > 0) {
  console.log(number + " is a positive number.");
} else if (number < 0) {
  console.log(number + " is a negative number.");
} else {
  console.log(number + " is zero.");
}

// 2. Switch Statement
let day = 3;
let dayName;

switch (day) {
  case 1:
    dayName = "Monday";
    break;
  case 2:
    dayName = "Tuesday";
    break;
  case 3:
    dayName = "Wednesday";
    break;
  case 4:
    dayName = "Thursday";
    break;
  case 5:
    dayName = "Friday";
    break;
  case 6:
    dayName = "Saturday";
    break;
  case 7:
    dayName = "Sunday";
    break;
  default:
    dayName = "Invalid day";
}

console.log("Day " + day + " is " + dayName);

// 3. For Loop
console.log("For Loop:");
for (let i = 1; i <= 5; i++) {
  console.log("Iteration: " + i);
}

// 4. While Loop
console.log("While Loop:");
let j = 1;
while (j <= 5) {
  console.log("Iteration: " + j);
  j++;
}

// 5. Do-While Loop
console.log("Do-While Loop:");
let k = 1;
do {
  console.log("Iteration: " + k);
  k++;
} while (k <= 5);

// 6. Break and Continue
console.log("Break and Continue:");
for (let m = 1; m <= 10; m++) {
  if (m === 5) {
    console.log("Breaking the loop at iteration: " + m);
    break; // Exit the loop when m is 5
  }
  if (m % 2 === 0) {
    console.log("Skipping even number: " + m);
    continue; // Skip even numbers
  }
  console.log("Iteration: " + m);
}

// 7. Nested Loops
console.log("Nested Loops:");
for (let n = 1; n <= 3; n++) {
  console.log("Outer Loop Iteration: " + n);
  for (let p = 1; p <= 2; p++) {
    console.log("  Inner Loop Iteration: " + p);
  }
}

// 8. Labeled Statements
console.log("Labeled Statements:");
outerLoop: for (let q = 1; q <= 3; q++) {
  console.log("Outer Loop Iteration: " + q);
  for (let r = 1; r <= 3; r++) {
    if (r === 2) {
      console.log("  Breaking to outer loop at inner iteration: " + r);
      break outerLoop; // Breaks out of the outer loop
    }
    console.log("  Inner Loop Iteration: " + r);
  }
}

// 9. For...of Loop -> Iterates over iterable objects (like arrays)
console.log("For...of Loop:");
const fruits = ["Apple", "Banana", "Cherry"];
for (const fruit of fruits) {
  console.log("Fruit: " + fruit);
}

// 10. For...in Loop -> Iterates over the enumerable properties of an object
console.log("For...in Loop:");
const person = { name: "John", age: 30, city: "New York" };
for (const key in person) {
  console.log(key + ": " + person[key]);
}

// 11. Ternary Operator
console.log("Ternary Operator:");
let age = 20;
let canVote = age >= 18 ? "Yes, can vote." : "No, cannot vote.";
console.log("Can the person vote? " + canVote);

// 12. forEach Loop -> Executes a provided function once for each array element
console.log("forEach Loop:");
const numbers = [1, 2, 3, 4, 5];
numbers.forEach(function (num) {
  console.log("Number: " + num);
});

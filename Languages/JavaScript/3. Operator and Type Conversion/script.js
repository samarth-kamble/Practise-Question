/*
    3. Operator and Type Conversion
*/

// Arithmetic Operators
let a = 10;
let b = 5;

console.log("Addition: " + (a + b)); // 15
console.log("Subtraction: " + (a - b)); // 5
console.log("Multiplication: " + a * b); // 50
console.log("Division: " + a / b); // 2
console.log("Modulus: " + (a % b)); // 0

// Comparison Operators
console.log("Equal to: " + (a == b)); // false
console.log("Not equal to: " + (a != b)); // true
console.log("Greater than: " + (a > b)); // true
console.log("Less than: " + (a < b)); // false
console.log("Greater than or equal to: " + (a >= b)); // true
console.log("Less than or equal to: " + (a <= b));

// Assignment Operators
let c = 10;
c += 5; // c = c + 5
console.log("c after += 5: " + c); // 15
c -= 3; // c = c - 3
console.log("c after -= 3: " + c); // 12
c *= 2; // c = c * 2
console.log("c after *= 2: " + c); // 24
c /= 4; // c = c / 4
console.log("c after /= 4: " + c); // 6
c %= 4; // c = c % 4
console.log("c after %= 4: " + c); // 2

// Logical Operators
let x = true;
let y = false;

console.log("Logical AND: " + (x && y)); // false
console.log("Logical OR: " + (x || y)); // true
console.log("Logical NOT: " + !x); // false
console.log("Logical NOT: " + !y); // true

// Ternary Operator
let age = 26;
let canVote = age >= 18 ? "Yes" : "No";
console.log("Can vote: " + canVote); // Yes

// Truthy and Falsy Values
let truthyValue = "Hello"; // Non-empty string is truthy
let falsyValue = 0; // 0 is falsy

if (truthyValue) {
  console.log("Truthy value: " + truthyValue); // Hello
}

if (!falsyValue) {
  console.log("Falsy value: " + falsyValue); // 0
}

/*
 * Type Conversion
 * 1. Implicit Type Conversion (Type Coercion)
 * 2. Explicit Type Conversion (Type Casting)
 */

console.log("Implicit Type Conversion:");
let num = 10;
let str = "5";

console.log("Number + String: " + (num + str)); // "105" (string concatenation)
console.log("Number - String: " + (num - str)); // 5 (string converted to number)
console.log("Number * String: " + num * str); // 50 (string converted to number)
console.log("Number / String: " + num / str); // 2 (string converted to number)

console.log("Number == String: " + (num == str)); // false (string converted to number)

console.log("Explicit Type Conversion:");
let strNum = "123";
let convertedNum = Number(strNum);
console.log("Converted Number: " + convertedNum); // 123

let numToStr = 456;
let convertedStr = String(numToStr);
console.log("Converted String: " + convertedStr); // "456"

let boolValue = true;
let convertedBoolToNum = Number(boolValue);
console.log("Converted Boolean to Number: " + convertedBoolToNum); // 1

let nullValue = null;
let convertedNullToNum = Number(nullValue);
console.log("Converted Null to Number: " + convertedNullToNum); // 0

let undefinedValue = undefined;
let convertedUndefinedToNum = Number(undefinedValue);
console.log("Converted Undefined to Number: " + convertedUndefinedToNum); // NaN -> Not a Number

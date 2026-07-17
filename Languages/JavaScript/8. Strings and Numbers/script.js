// 8. Strings and Numbers

// 1. String Concatenation
let firstName = "John";
let lastName = "Doe";
let fullName = firstName + " " + lastName; // Concatenating strings using the + operator
console.log("Full Name: " + fullName); // Full Name: John Doe

// 2. String Length
console.log("Length of Full Name: " + fullName.length); // Length of Full Name: 8

// 3. String Methods
let message = "Hello, World!";
console.log("Uppercase: " + message.toUpperCase());
console.log("Lowercase: " + message.toLowerCase());
console.log("Index of 'World': " + message.indexOf("World")); // Index of 'World': 7
console.log("Substring (0, 5): " + message.substring(0, 5)); // Substring (0, 5): Hello

// 4. Number Operations
let num1 = 10;
let num2 = 3;

console.log("Addition: " + (num1 + num2)); // Addition: 13
console.log("Subtraction: " + (num1 - num2)); // Subtraction: 7
console.log("Multiplication: " + num1 * num2); // Multiplication: 30
console.log("Division: " + num1 / num2); // Division: 3.3333333333333335
console.log("Modulus: " + (num1 % num2)); // Modulus: 1

// 5. Number Methods
let floatNum = 3.14159;
console.log("Fixed to 2 decimal places: " + floatNum.toFixed(2)); // Fixed to 2 decimal places: 3.14
console.log("Rounded Value: " + Math.round(floatNum)); // Rounded Value: 3
console.log("Ceiling Value: " + Math.ceil(floatNum)); // Ceiling Value: 4
console.log("Floor Value: " + Math.floor(floatNum)); // Floor Value: 3
console.log("Square Root: " + Math.sqrt(16)); // Square Root: 4
console.log("Random Number between 0 and 1: " + Math.random()); // Random Number between 0 and 1: (random value)
console.log(
  "Random Number between 1 and 10: " + Math.floor(Math.random() * 10) + 1,
); // Random Number between 1 and 100: (random value)

// Template Literals (Template Strings)
let age = 30;
let greeting = `Hello, my name is ${fullName} and I am ${age} years old.`;
console.log(greeting); // Hello, my name is John Doe and I am 30 years old.

// String Comparison
let str1 = "apple";
let str2 = "banana";
console.log(`Is "${str1}" less than "${str2}"? ` + (str1 < str2)); // Is "apple" less than "banana"? true

// String Immutability
let originalString = "Hello";
let modifiedString = originalString.replace("H", "J");
console.log("Original String: " + originalString);
console.log("Modified String: " + modifiedString);

// String Splitting and Joining
let csvData = "John,Doe,30,New York";
let dataArray = csvData.split(",");
console.log("Data Array: ", dataArray); // Data Array:  [ 'John', 'Doe', '30', 'New York' ]
let joinedString = dataArray.join(" | ");
console.log("Joined String: " + joinedString); // Joined String: John | Doe | 30 | New York

// String Trimming
let stringWithSpaces = "   Hello, World!   ";
console.log("Before Trim: '" + stringWithSpaces + "'");
console.log("After Trim: '" + stringWithSpaces.trim() + "'"); // After Trim: 'Hello, World!'

// String Padding means adding extra characters to the beginning or end of a string until it reaches a certain length. This can be useful for formatting output, especially when dealing with numbers or aligning text in a console or UI.
let paddedString = "5";
console.log("Padded String (Start): '" + paddedString.padStart(5, "0") + "'");
console.log("Padded String (End): '" + paddedString.padEnd(5, "0") + "'");

// Number Conversion
let stringNumber = "42";
let convertedNumber = Number(stringNumber);
console.log("Converted Number: " + convertedNumber); // Converted Number: 42

// Checking if a value is NaN (Not-a-Number)
let notANumber = "Hello";
console.log("Is '" + notANumber + "' NaN? " + isNaN(notANumber)); // Is 'Hello' NaN? true

// Number to String Conversion
let numToConvert = 100;
let convertedString = numToConvert.toString();
console.log("Converted String: " + convertedString); // Converted String: 100

// Date and Time Operations
let currentDate = new Date();
console.log("Current Date and Time: " + currentDate.toString());
console.log("Year: " + currentDate.getFullYear());
console.log("Month: " + (currentDate.getMonth() + 1)); // Months are zero-indexed
console.log("Day: " + currentDate.getDate());
console.log("Hours: " + currentDate.getHours());
console.log("Minutes: " + currentDate.getMinutes());
console.log("Seconds: " + currentDate.getSeconds());

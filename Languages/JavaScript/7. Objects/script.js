// 6. OBJECTS IN JAVASCRIPT
// Objects are collections of key-value pairs, where keys are strings (or symbols) and values can be of any data type.

// Creating an object using object literal syntax
const person = {
  firstName: "John",
  lastName: "Doe",
  age: 30,
  isEmployed: true,
  greet: function () {
    return "Hello, my name is " + this.firstName + " " + this.lastName + ".";
  },
};

// Accessing object properties
console.log("Accessing Object Properties:");
console.log("First Name: " + person.firstName); // John
console.log("Last Name: " + person.lastName); // Doe
console.log("Age: " + person.age); // 30
console.log("Is Employed: " + person.isEmployed); // true

// Accessing object properties using bracket notation
console.log("Accessing Object Properties using Bracket Notation:");
console.log("First Name: " + person["firstName"]); // John
console.log("Last Name: " + person["lastName"]); // Doe
console.log("Age: " + person["age"]); // 30
console.log("Is Employed: " + person["isEmployed"]); // true

// Adding a new property to the object
person.middleName = "William";
console.log("Middle Name: " + person.middleName); // William

// Calling a method of the object
console.log(person.greet()); // Hello, my name is John Doe.

// Adding a new property to the object
person.city = "New York";
console.log("City: " + person.city); // New York

// Modifying an existing property
person.age = 31;
console.log("Updated Age: " + person.age); // 31

// Deleting a property from the object
delete person.isEmployed;
console.log("Is Employed after deletion: " + person.isEmployed); // undefined

// Iterating over object properties using for...in loop
console.log("Iterating over Object Properties:");
for (const key in person) {
  console.log(key + ": " + person[key]);
}

// Checking if a property exists in the object
console.log("Does 'firstName' exist in person? " + ("firstName" in person)); // true
console.log("Does 'isEmployed' exist in person? " + ("isEmployed" in person)); // false

// Using Object.keys() to get an array of keys
const keys = Object.keys(person);
console.log("Object Keys: " + keys); // ["firstName", "lastName", "age", "greet", "city"]

// Using Object.values() to get an array of values
const values = Object.values(person);
console.log("Object Values: " + values); // ["John", "Doe", 31, function, "New York"]

// Using Object.entries() to get an array of key-value pairs
const entries = Object.entries(person);
console.log("Object Entries: " + entries); // [["firstName", "John"], ["lastName", "Doe"], ["age", 31], ["greet", function], ["city", "New York"]]

// this keyword in objects
const car = {
  make: "Toyota",
  model: "Camry",
  year: 2020,
  getCarInfo: function () {
    return "Car: " + this.make + " " + this.model + ", Year: " + this.year;
  },
};

console.log(car.getCarInfo()); // Car: Toyota Camry, Year: 2020

// Nested Objects
const company = {
  name: "Tech Solutions",
  address: {
    street: "123 Main St",
    city: "San Francisco",
    state: "CA",
  },
  employees: [
    { name: "Alice", position: "Developer" },
    { name: "Bob", position: "Designer" },
  ],
};

console.log("Company Name: " + company.name); // Tech Solutions
console.log(
  "Company Address: " +
    company.address.street +
    ", " +
    company.address.city +
    ", " +
    company.address.state,
); // 123 Main St, San Francisco, CA
console.log(
  "First Employee: " +
    company.employees[0].name +
    ", Position: " +
    company.employees[0].position,
); // Alice, Position: Developer
console.log(
  "Second Employee: " +
    company.employees[1].name +
    ", Position: " +
    company.employees[1].position,
); // Bob, Position: Designer

// Object Destructuring
const { firstName, lastName, age } = person;
console.log("Destructured First Name: " + firstName);
console.log("Destructured Last Name: " + lastName);
console.log("Destructured Age: " + age);

// Object Spread Operator
const updatedPerson = { ...person, age: 32, city: "Los Angeles" };
console.log("Updated Person: ", updatedPerson);

// Object.freeze() to make an object immutable
const frozenPerson = Object.freeze(person);
frozenPerson.age = 40; // This will not change the age property
console.log("Frozen Person Age: " + frozenPerson.age); // 32

// Object.seal() to prevent adding or removing properties, but allows modification of existing properties
const sealedPerson = Object.seal(person);
sealedPerson.age = 35; // This will change the age property
sealedPerson.country = "USA"; // This will not add a new property
console.log("Sealed Person Age: " + sealedPerson.age); // 35
console.log("Sealed Person Country: " + sealedPerson.country); // undefined

// hasOwn Property
console.log(
  "Does 'firstName' exist in person? " + person.hasOwnProperty("firstName"),
); // true
console.log(
  "Does 'isEmployed' exist in person? " + person.hasOwnProperty("isEmployed"),
); // false

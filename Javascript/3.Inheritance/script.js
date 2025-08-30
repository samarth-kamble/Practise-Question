//  Inheritance : Inheritance in JavaScript
/*
*Inheritance   Inheritance is a fundamental concept in object-oriented programming (OOP) that allows one class to inherit properties and methods from another class.
   The concept of inheritance allows one class to inherit the properties and methods of another class.
   In JavaScript, inheritance can be achieved using prototypes or the class syntax introduced in ES6.
   This enables code reusability and a hierarchical class structure.
   In this example, we will demonstrate inheritance by creating a base class and a derived class.
   The derived class will inherit the properties and methods of the base class.
   Let's get started!
*/

class Person {
    eat() {
        console.log("Eating...");
    }
    sleep() {
        console.log("Sleeping...");
    }
}

class Engineer extends Person {
    work() {
        console.log("Working on engineering tasks...");
    }
}

let samObj = new Engineer();
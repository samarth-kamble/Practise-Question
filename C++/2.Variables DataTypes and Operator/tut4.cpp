// Operators : Arithmetic, Relational, Logical, Bitwise, Assignment, Increment/Decrement, Conditional, Comma
// This program demonstrates the use of various operators in C++.
#include <iostream>
using namespace std;

int main() {
    // Taking input from the user
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    // Arithmetic Operators: Arithmetic operations is a basic mathematical operation that includes addition, subtraction, multiplication, division, modulus, increment, and decrement. 

    cout << "Addition: " << (a + b) << endl;          // Addition
    cout << "Subtraction: " << (a - b) << endl;       // Subtraction
    cout << "Multiplication: " << (a * b) << endl;    // Multiplication 
    cout << "Division: " << (a / b) << endl;          // Division
    cout << "Modulus: " << (a % b) << endl;           // Modulus
    cout << "Increment a: " << (++a) << endl;         // Increment
    cout << "Decrement b: " << (--b) << endl;         // Decrement
    cout << "Negation of a: " << (-a) << endl;        // Negation
    cout << "Negation of b: " << (-b) << endl;        // Negation
    cout << (5/(double)2) << endl; // Integer division (5/2 = 2)
    cout << "------------------------" << endl;

    // Relational Operators : 
    cout << "a == b: " << (a == b) << endl;           // Equal to
    cout << "a != b: " << (a != b) << endl;           // Not equal to
    cout << "a > b: " << (a > b) << endl;             // Greater than
    cout << "a < b: " << (a < b) << endl;             // Less than
    cout << "a >= b: " << (a >= b) << endl;           // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl;           // Less than or equal to
    cout << "------------------------" << endl;

    // Logical Operators : 
    cout << "Logical AND (a && b): " << (a && b) << endl; // Logical AND
    cout << "Logical OR (a || b): " << (a || b) << endl;   // Logical OR
    cout << "Logical NOT (!a): " << (!a) << endl;           // Logical NOT
    cout << "------------------------" << endl;

    // Bitwise Operators :
    cout << "Bitwise AND (a & b): " << (a & b) << endl;     // Bitwise AND
    cout << "Bitwise OR (a | b): " << (a | b) << endl;      // Bitwise OR
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;     // Bitwise XOR
    cout << "Bitwise NOT (~a): " << (~a) << endl;           // Bitwise NOT
    cout << "Left Shift (a << 1): " << (a << 1) << endl;    // Left Shift
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;  // Right Shift
    cout << "------------------------" << endl;
     
    return 0;
}
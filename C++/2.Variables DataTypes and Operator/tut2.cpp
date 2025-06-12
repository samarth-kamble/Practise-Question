#include<iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int a = 10; // Integer variable
    float b = 5.5; // Float variable
    char c = 'A'; // Character variable
    bool d = true; // Boolean variable

    // Output the values of the variables
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;

    // TypeCasting examples
    int value = c;
    cout << "Character to Integer: " << value << endl; // Implicit conversion from char to int

    double price = 100.99;
    int newPrice = (int)price; // Explicit conversion from double to int
    cout << "Double to Integer: " << newPrice << endl; // Explicit conversion from double to int

    
    return 0;
}
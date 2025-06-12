#include<iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int a = 10; // Integer variable
    float b = 20.5f; // Float variable
    char c = 'A'; // Character variable
    bool d = true; // Boolean variable
    double e = 30.75; // Double variable
    long f = 100000L; // Long variable

    // Output the values of the variables
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;
    cout << "Double: " << e << endl;
    cout << "Long: " << f << endl;

    // Size of each variable type
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(d) << " bytes" << endl;
    cout << "Size of double: " << sizeof(e) << " bytes" << endl;
    cout << "Size of long: " << sizeof(f) << " bytes" << endl;
    
    return 0;
}
// Taking a input
#include <iostream>
using namespace std;

int main()
{

    // Declare variables
    int a;   // Integer variable
    float b; // Float variable
    char c;  // Character variable
    bool d;  // Boolean variable

    // Input values for the variables
    cout << "Enter an integer: ";
    cin >> a; // Input for integer variable
    cout << "Enter a float: ";
    cin >> b; // Input for float variable
    cout << "Enter a character: ";
    cin >> c; // Input for character variable
    cout << "Enter a boolean (0 or 1): ";
    cin >> d; // Input for boolean variable

    // Output the values of the variables
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;

    return 0;
}
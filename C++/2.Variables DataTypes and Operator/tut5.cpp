//  Problem : Write a program to take two integer inputs from the user and print their sum.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of A: ";
    cin >> a;

    cout << "Enter the value of B: ";
    cin >> b;

    int sum = a + b;
    cout << "Sum of A and B is: " << sum << endl;
    return 0;
}
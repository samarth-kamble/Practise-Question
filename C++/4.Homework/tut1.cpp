// tut1.cpp : Figure out how to find out number is power of 2 without any loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if n is a poxwer of 2 using bitwise operations
    if (n > 0 && (n & (n - 1)) == 0)
    {
        cout << n << " is a power of 2." << endl;
    }
    else
    {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}
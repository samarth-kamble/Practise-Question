// tut2.cpp : Reverse a number
#include <iostream>
using namespace std;

int main()
{
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int reversedNumber = 0;

    while (number != 0)
    {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    cout << reversedNumber << endl;
    return 0;
}
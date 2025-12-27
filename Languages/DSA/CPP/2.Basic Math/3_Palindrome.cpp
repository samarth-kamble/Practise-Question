#include <iostream>

using namespace std;

int main()
{
    int number, revNum = 0, temp;
    cout << "Enter a number: ";
    cin >> number;
    temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        revNum = revNum * 10 + digit;
        temp /= 10;
    }
    if (revNum == number)
        cout << number << " is a palindrome number." << endl;
    else
        cout << number << " is not a palindrome number." << endl;

    return 0;
}
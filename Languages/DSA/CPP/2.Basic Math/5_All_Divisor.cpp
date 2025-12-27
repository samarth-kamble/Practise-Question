#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Divisors of " << number << " are: ";
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
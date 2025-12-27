#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int number)
{
    vector<int> divisors;
    for (int i = 1; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            divisors.push_back(i);
            if (i != number / i)
            {
                divisors.push_back(number / i);
            }
        }
    }

    // Sort divisors for ordered output
    sort(divisors.begin(), divisors.end());
    for (int divisor : divisors)
    {
        cout << divisor << " ";
    }
    cout << endl;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Divisors of " << number << " are: ";
    printDivisors(number);

    return 0;
}
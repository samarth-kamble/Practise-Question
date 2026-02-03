#include <iostream>

using namespace std;

int factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main()
{
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    int result = factorial(number);
    cout << "Factorial of " << number << " is " << result << endl;

    return 0;
}
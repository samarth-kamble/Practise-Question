#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;

    cout << "Using while loop to calculate factorial:" << endl;
    int i = 1;
    fact = 1;

    while (i <= n)
    {
        fact *= i;
        i++;
    }
    cout << "Factorial of " << n << " using while loop is: " << fact << endl;
    return 0;
}
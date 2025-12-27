#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
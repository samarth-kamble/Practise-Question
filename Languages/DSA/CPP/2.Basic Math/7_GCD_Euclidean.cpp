#include <iostream>

using namespace std;

int findGCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    else
        return a;

    return 0;
}

int main()
{
    int a, b;
    cout << "Enter two numbers to find GCD: ";
    cin >> a >> b;

    int gcd = findGCD(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;

    return 0;
}
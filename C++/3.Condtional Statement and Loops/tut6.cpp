#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {             // Check if the number is even
            sum += i; // Add even numbers to sum
        }
        else
        {
            continue;
        }
    }
    cout << "Sum of odd numbers using for loop: " << sum << endl;
}
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
        if (i % 3 == 0)
        {
            sum += i; // Add multiples of 3 to sum
        }
        else
        {
            continue;
        }
    }
    cout << "Sum of multiples of 3 using for loop: " << sum << endl;
    return 0;
}
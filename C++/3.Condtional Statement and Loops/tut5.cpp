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
        sum += i;
    }
    cout << "Sum using for loop: " << sum << endl;

    sum = 0; // Reset sum for the next loop
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum using while loop: " << sum << endl;

    sum = 0; // Reset sum for the next loop
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    cout << "Sum using do-while loop: " << sum << endl;
    return 0;
}
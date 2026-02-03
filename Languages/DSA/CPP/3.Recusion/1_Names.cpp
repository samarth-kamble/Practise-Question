#include <iostream>

using namespace std;

void printNames(int i, int n)
{
    // Base case: if i exceeds n, stop the recursion
    if (i > n)
    {
        return;
    }
    // Print the name
    cout << "Sam" << endl;
    // Recursive call with incremented i
    printNames(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter the number of times to print the name: ";
    cin >> n;

    printNames(1, n); // Start recursion from 1 to n

    return 0;
}
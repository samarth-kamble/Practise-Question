#include <iostream>

using namespace std;

void printNumbers(int i, int n)
{
    // Base case
    if (i < 1)
    {
        return;
    }

    // Recursive call
    // First print numbers from 1 to i-1 then print i to get the correct order.
    printNumbers(i - 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printNumbers(n, n);
    cout << endl;

    return 0;
}
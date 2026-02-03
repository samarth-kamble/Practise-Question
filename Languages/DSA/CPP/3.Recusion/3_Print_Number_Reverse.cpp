#include <iostream>

using namespace std;

void printReverse(int i, int n)
{
    // base case
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printReverse(i - 1, n);
}

int main()
{
    int n;
    cin >> n;

    cout << "Printing numbers in reverse order:" << endl;
    printReverse(n, 1);
    return 0;
}
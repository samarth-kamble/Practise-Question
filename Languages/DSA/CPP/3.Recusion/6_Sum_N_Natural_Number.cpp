#include <iostream>

using namespace std;

void sumNaturalNumbers(int i, int sum = 0)
{
    // Base case
    if (i < 1)
    {
        cout << sum;
        return;
    }
    // Recursive case
    sumNaturalNumbers(i - 1, sum + i);
}

int main()
{
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    sumNaturalNumbers(n);
}
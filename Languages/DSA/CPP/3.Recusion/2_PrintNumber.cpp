#include <iostream>
using namespace std;

void printNumbers(int current, int n)
{
    // Base case: if current exceeds n, return
    if (current > n)
        return;

    cout << current << " "; // Print the current number

    printNumbers(current + 1, n); // Recursive call with next number
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printNumbers(1, n); // Start printing from 1
    cout << endl;       // New line after printing all numbers

    return 0;
}
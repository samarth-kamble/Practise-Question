#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num = 1; // Initialize the number to print
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl; // Move to the next line after printing the row
    }

    return 0;
}
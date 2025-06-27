#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " "; // Print the asterisk
        }
        cout << endl; // Move to the next line after each row
    }
}

// if i = 0. intilaize

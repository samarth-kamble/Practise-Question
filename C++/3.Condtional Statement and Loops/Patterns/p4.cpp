#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " "; // Print the character
            ch++;              // Increment to the next character
        }
        cout << endl; // Move to the next line after each row
    }
}
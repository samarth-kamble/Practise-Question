#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 0; i < n; i++) // Loop for each row
    {
        char ch = 'A';
        for (int j = 0; j < n; j++) // Loop for each column
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
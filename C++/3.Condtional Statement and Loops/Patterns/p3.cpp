#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int nums = 1; // Initialize row counter

    for (int i = 1; i <= n; i++) // Loop for each row
    {
        for (int j = 1; j <= n; j++)
        {
            cout << nums << " "; // Print the column number
            nums++;
        }
        cout << endl;
    }

    return 0;
}

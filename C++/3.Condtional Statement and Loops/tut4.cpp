#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Usinf for loop" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "The Values are " << i << endl;
    }

    cout << "Using while loop" << endl;
    int i = 1;
    while (i <= n)
    {
        cout << "The Values are " << i << endl;
        i++;
    }

    cout << "Using do while loop" << endl;
    i = 1;
    do
    {
        cout << "The Values are " << i << endl;
        i++;
    } while (i <= n);

        return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j > 1; j--)
        { // Backward loop to print spaces
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

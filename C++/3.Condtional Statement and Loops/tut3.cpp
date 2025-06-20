#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a char:";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "You entered a lowercase letter." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "You entered an uppercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "You entered a digit." << endl;
    }
    else
    {
        cout << "You entered a special character." << endl;
    }
}
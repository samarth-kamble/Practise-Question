#include <iostream>
using namespace std;

int main()
{
    int number = 20;
    if (number <= 0)
    {
        cout << "Number is negative";
    }
    else if (number == 0)
    {
        cout << "Number is zero";
    }
    else
    {
        cout << "Number is positive";
    }
    return 0;
}
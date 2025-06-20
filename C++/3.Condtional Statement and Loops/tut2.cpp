#include <iostream>

using namespace std;

void oddEven(int number)
{
    if (number % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }
}

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "You are a minor." << endl;
    }
    else if (age >= 18 && age < 65)
    {
        cout << "You are an adult." << endl;
    }
    else
    {
        cout << "You are a senior citizen." << endl;
    }

    int number;
    cout << "Enter a number to check if it is odd or even: ";
    cin >> number;
    oddEven(number);
    return 0;
}

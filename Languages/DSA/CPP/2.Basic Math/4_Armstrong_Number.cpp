#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    int temp = number;
    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit * digit * digit; // Cube of the digit
        number /= 10;
    }

    if (sum == temp)
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;

    return 0;
}
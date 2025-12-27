
#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int cnt = 0;

    while (number > 0)
    {
        int lastDigit = number % 10;
        cnt = cnt + 1;
        number = number / 10;
    }
    cout << "Number of digits: " << cnt << endl;
    return cnt;
}
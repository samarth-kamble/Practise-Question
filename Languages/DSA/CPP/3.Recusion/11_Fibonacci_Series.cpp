#include <iostream>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    Solution solution;
    int n;
    cout << "Enter a number to find its Fibonacci value: ";
    cin >> n;
    int result = solution.fib(n);
    cout << "Fibonacci of " << n << " is: " << result << endl;
    return 0;
}
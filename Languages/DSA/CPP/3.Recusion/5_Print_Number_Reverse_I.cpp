#include <iostream>

using namespace std;

class Solution
{
public:
    // Recursive function to print numbers from current down to 1 using backtracking
    void printNumbers(int current)
    {
        // Base case: if current is less than 1, stop recursion
        // Base case
        if (current == 0)
        {
            return;
        }

        // Recursive call
        printNumbers(current - 1);

        // Backtracking step (work done while returning)
        cout << current << " ";
    }
};

int main()
{
    Solution sol;
    int n = 10;

    sol.printNumbers(n);
    cout << "\n";

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        int p1 = 0;

        int p2 = arr.size() - 1;

        while (p1 < p2)
        {
            swap(arr[p1], arr[p2]);
            p1++;
            p2--;
        }
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {1, 2, 3, 4, 5};

    sol.reverseArray(arr);

    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
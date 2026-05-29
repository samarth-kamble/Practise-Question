#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to sort the array using insertion sort
    vector<int> insertionSort(vector<int> &nums)
    {
        int n = nums.size(); // Size of the array

        // For every element in the array
        for (int i = 1; i < n; i++)
        {
            int key = nums[i]; // Current element as key
            int j = i - 1;

            // Shift elements that are greater than key by one position
            while (j >= 0 && nums[j] > key)
            {
                nums[j + 1] = nums[j];
                j--;
            }

            nums[j + 1] = key; // Insert key at correct position
        }

        return nums;
    }
};

int main()
{
    // Create an instance of solution class
    Solution solution;

    vector<int> nums = {13, 46, 24, 52, 20, 9};

    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.insertionSort(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
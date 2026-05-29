
#include <bits/stdc++.h>

using namespace std;

int sortArray(vector<int> &arr)
{
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    // Find and output the largest element in both arrays
    cout << "The Largest element in the array is: " << sortArray(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArray(arr2) << endl;

    return 0;
}
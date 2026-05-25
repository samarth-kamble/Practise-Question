/*

Frequency Count using Hashing
Given an array of integers, count the frequency of each element in the array using hashing.
Example:
Input: arr[] = {1, 2, 1, 3, 2, 1}
Output:
1 -> 3
2 -> 2
3 -> 1

Time: O(n)
Space: O(n)

*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 3, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (auto it : freq)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = 7;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int ans = -1;

    for (auto it : mp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            ans = it.first;
        }
    }

    cout << ans;

    return 0;
}
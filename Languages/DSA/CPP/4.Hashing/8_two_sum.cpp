#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end())
        {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main()
{
    vector<int> nums = {11, 7, 2, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];
}
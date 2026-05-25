#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "aabbcdde";

    unordered_map<char, int> mp;

    for (char ch : s)
    {
        mp[ch]++;
    }

    for (char ch : s)
    {
        if (mp[ch] == 1)
        {
            cout << ch;
            break;
        }
    }
    return 0;
}
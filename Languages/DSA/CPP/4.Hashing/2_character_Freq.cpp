#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        cout << ch << " " << freq[i] << endl;
    }

    return 0;
}
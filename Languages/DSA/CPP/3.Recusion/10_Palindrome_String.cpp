#include <iostream>
#include <string>

using namespace std;

// Function to check if a string is a palindrome using recursion
bool palindrome(int i, string &s)
{
    // Base Condition: If i exceeds half of the string, all the elements have been compared
    // and the string is a palindrome, return true.
    if (i >= s.length() / 2)
        return true;

    // If the start and end characters are not equal, it's not a palindrome.
    if (s[i] != s[s.length() - i - 1])
        return false;

    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i + 1, s);
}

int main()
{
    // Example string.
    string s = "madam";

    // Check if the string is a palindrome and output the result
    cout << palindrome(0, s); // Output 1 if palindrome, 0 if not
    cout << endl;
    return 0;
}
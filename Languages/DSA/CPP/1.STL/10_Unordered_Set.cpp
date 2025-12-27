#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> uset;
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(20); // Duplicate, will not be added

    cout << "Elements in the unordered_set:";
    for (const int &elem : uset)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Check if an element exists
    int key = 20;
    if (uset.find(key) != uset.end())
    {
        cout << key << " found in the unordered_set." << endl;
    }
    else
    {
        cout << key << " not found in the unordered_set." << endl;
    }

    // Remove an element
    uset.erase(10);
    cout << "Elements after removing 10:";
    for (const int &elem : uset)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> hashSet;

    for (int i = 0; i < n; i++)
    {
        hashSet.insert(arr[i]);
    }

    int elementToFind = 3;

    if (hashSet.find(elementToFind) != hashSet.end())
    {
        cout << "Element " << elementToFind << " exists in the array." << endl;
    }
    else
    {
        cout << "Element " << elementToFind << " does not exist in the array." << endl;
    }
}
#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(5);
    ms.insert(1);
    ms.emplace(3);
    ms.insert(5);

    // Printing elements of the multiset
    cout << "Elements in the multiset: ";
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    int cnt = ms.count(5);
    cout << "Count of 5 in the multiset: " << cnt << endl;

    ms.erase(5); // Erases all occurrences of 5
    cout << "Elements in the multiset after erasing 5: ";
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    ms.insert(5);
    ms.insert(6);
    ms.insert(2);

    cout << "Elements in the multiset using range-based for loop: ";
    for (int x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> st;

    st.insert(5);
    st.insert(2);
    st.insert(1);
    st.insert(4);
    st.insert(3);

    cout << "Elements in the set are (using Iterator): ";
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\nElements in the set are (using Range-based for loop): ";
    for (const auto &value : st)
    {
        cout << value << " ";
    }

    // Finding an element
    int key = 3;
    int key_not_found = 6;
    auto it = st.find(key);
    if (it != st.end())
    {
        cout << "\nElement " << key << " found in the set." << endl;
    }
    else
    {
        cout << "\nElement " << key << " not found in the set." << endl;
    }
    it = st.find(key_not_found);
    if (it != st.end())
    {
        cout << "Element " << key_not_found << " found in the set." << endl;
    }
    else
    {
        cout << "Element " << key_not_found << " not found in the set." << endl;
    }

    // count() method
    cout << "Count of element " << key << " in the set: " << st.count(key) << endl;
    cout << "Count of element " << key_not_found << " in the set: " << st.count(key_not_found) << endl;

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << "Number of set bits in " << num << " is: " << cnt << endl;

    return 0;
}
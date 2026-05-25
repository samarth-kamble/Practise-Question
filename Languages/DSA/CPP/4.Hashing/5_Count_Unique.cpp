#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> st;
    for (int x : arr)
    {
        st.insert(x);
    }

    cout << "Unique Elements = "
         << st.size();

    return 0;
}
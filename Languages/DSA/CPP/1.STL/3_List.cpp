#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Create a list of integers
    list<int> myList;

    // Add some elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.emplace_back(40); // More efficient than push_back

    // Display the elements of the list
    cout << "\nList elements using a for each loop: ";
    for (const int &num : myList)
    {
        cout << num << " ";
    }

    // Displaying using the iterator
    cout << "\nDisplaying List using an iterator: ";
    for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Displaying list using auto
    cout << "\nDisplaying a list using auto: ";
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Remove last element
    myList.pop_back();
    cout << "\nAfter pop_back, List elements: ";
    for (int i : myList)
    {
        cout << i << " ";
    }

    cout << "\n";
    return 0;
}
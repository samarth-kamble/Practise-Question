#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // Create a deque of integers
    deque<int> myDeque;

    // Add some elements to the deque
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_front(5);    // Adding element at the front
    myDeque.emplace_back(30); // More efficient than push_back

    // Display the elements of the deque
    cout << "\nDeque elements using a for each loop: ";
    for (const int &num : myDeque)
    {
        cout << num << " ";
    }

    // Displaying using the iterator
    cout << "\nDisplaying Deque using an iterator: ";
    for (deque<int>::iterator it = myDeque.begin(); it != myDeque.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Displaying deque using auto
    cout << "\nDisplaying a deque using auto: ";
    for (auto it = myDeque.begin(); it != myDeque.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Remove last element
    myDeque.pop_back();
    cout << "\nAfter pop_back, Deque elements: ";
    for (int i : myDeque)
    {
        cout << i << " ";
    }

    cout << "\n";
    cout << "Access first element: " << myDeque.front() << endl; // Access first element
    cout << "Access last element: " << myDeque.back() << endl;   // Access last element
    cout << "Size of deque: " << myDeque.size() << endl;         // Get size of deque

    return 0;
}
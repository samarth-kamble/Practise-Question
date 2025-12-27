#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Create a queue of integers
    queue<int> q;

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display the front element
    cout << "Front element: " << q.front() << endl; // Output: 10

    // Remove an element from the queue
    q.pop();

    // Display the front element after pop
    cout << "Front element after pop: " << q.front() << endl; // Output: 20

    // Display the size of the queue
    cout << "Size of queue: " << q.size() << endl; // Output: 2

    // Check if the queue is empty
    if (!q.empty())
    {
        cout << "Queue is not empty." << endl;
    }
    else
    {
        cout << "Queue is empty." << endl;
    }

    return 0;
}
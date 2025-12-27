#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    // Pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // Outputs 30

    // Popping an element from the stack
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Outputs 20

    // Checking size of the stack
    cout << "Stack size: " << s.size() << endl; // Outputs 2

    // Checking if the stack is empty
    if (s.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}
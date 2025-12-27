#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max-heap by default
    priority_queue<int> pq;

    pq.push(30);
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(40);

    cout << "Elements in priority queue (max-heap): ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Min-heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(5);
    min_pq.push(40);
    cout << "Elements in priority queue (min-heap): ";
    while (!min_pq.empty())
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;

    return 0;
}
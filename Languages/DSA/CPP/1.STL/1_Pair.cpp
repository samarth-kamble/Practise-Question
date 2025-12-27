#include<iostream>
#include<utility> // for std::pair

using namespace std;

int main () {
    pair<int , int> p1; // Default initialization
    pair<int , string> p2(1, "Hello"); // Parameterized initialization

    // Accessing elements of the pair
    cout << "Pair p1: (" << p1.first << ", " << p1.second << ")" << endl;
    cout << "Pair p2: (" << p2.first << ", " << p2.second << ")" << endl;

    // Modifying elements of the pair
    p1.first = 10;
    p1.second = 20;
    cout << "Modified Pair p1: (" << p1.first << ", " << p1.second << ")" << endl;

    // Using make_pair to create a pair
    pair<string, double> p3 = make_pair("Pi", 3.14);
    cout << "Pair p3: (" << p3.first << ", " << p3.second << ")" << endl;


    pair<int,int>arr[3] = { {1,2}, {3,4}, {5,6} };
    cout<<"Array of pairs: "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    cout<<"Print second elements of seconda array: "<< arr[1].second <<endl;

    // Swapping pairs
    pair <int, int> p4(5, 10);
    cout << "Before swap: p1 = (" << p1.first << ", " << p1.second << "), p4 = (" << p4.first << ", " << p4.second << ")" << endl;
    p1.swap(p4);
    cout << "After swap: p1 = (" << p1.first << ", " << p1.second << "), p4 = (" << p4.first << ", " << p4.second << ")" << endl;

    // Comparison of pairs
    pair<int, int> p5(5, 10);
    if (p1 == p5) {
        cout << "p1 is equal to p5" << endl;
    } else {
        cout << "p1 is not equal to p5" << endl;
    }

    return 0;
}
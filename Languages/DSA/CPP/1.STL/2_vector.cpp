#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> numbers;

    // Add some elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.emplace_back(40); // More efficient than push_back

    // Display the elements of the vector
    cout << "\nVector elements using a for each loop: ";
    for (const int &num : numbers)
    {
        cout << num << " ";
    }

    // Displaying using the iterator
    cout << "\nDisplaying Vector using a iterator: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Displaying vector using a auto
    cout << "\nDisplaying a vector using a auto: ";
    for (auto it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Displaying  using a normal for loop
    cout << "\nDisplaying a vector using a normal for loop: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    // Vector of size 5 with all values as 100
    vector<int> vec(5, 100);
    cout << "\nVector of size 5 with all values as 100: ";
    for (int i : vec)
    {
        cout << i << " ";
    }

    // Vector
    vector<pair<int, int>> vecPair;
    vecPair.push_back({1, 2});
    vecPair.emplace_back(3, 4);

    cout << "\nVector of pairs: ";
    for (auto p : vecPair)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }

    cout << "\n";
    vector<int> copyVec(vec); // Copy constructor
    cout << "Copied Vector elements: ";
    for (int i : copyVec)
    {
        cout << i << " ";
    }

    cout << "\n";
    copyVec.pop_back(); // Remove last element
    cout << "After pop_back, Copied Vector elements: ";
    for (int i : copyVec)
    {
        cout << i << " ";
    }

    cout << "\n";
    // Erase second element
    if (copyVec.size() > 1)
    {
        copyVec.erase(copyVec.begin() + 1);
    }
    cout << "After erasing second element, Copied Vector elements: ";
    for (int i : copyVec)
    {
        cout << i << " ";
    }
    vector<int> eraseVec;
    eraseVec.push_back(10);
    eraseVec.push_back(20);
    eraseVec.push_back(30);
    eraseVec.push_back(40);
    cout << "\nBefore erase, eraseVec elements: ";
    for (int i : eraseVec)
    {
        cout << i << " ";
    }
    // Erase elements from index 1 to 3 (excluding 3)
    eraseVec.erase(eraseVec.begin() + 1, eraseVec.begin() + 3);
    cout << "\nAfter erase from index 1 to 3, eraseVec elements: ";
    for (int i : eraseVec)
    {
        cout << i << " ";
    }

    cout << "\n";
    vector<int> clearVec = {1, 2, 3, 4, 5};
    clearVec.clear(); // Clear all elements
    cout << "Size after clear: " << clearVec.size();

    cout << "\n";
    cout << "Empty vector check: " << clearVec.empty() << "\n"; // Check if vector is empty

    // Insert element at the beginning
    cout << "Before inserting 5 at the beginning: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    v.insert(v.begin(), 5);
    cout << "After inserting 5 at the beginning: ";
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}
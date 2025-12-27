#include <iostream>
#include <map>

using namespace std;

int main()
{

    // Create a map to store
    map<string, int> ageMap;

    // Insert key-value pairs into the map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Access and print values using keys
    cout << "Alice's age: " << ageMap["Alice"] << endl;
    cout << "Bob's age: " << ageMap["Bob"] << endl;
    cout << "Charlie's age: " << ageMap["Charlie"] << endl;

    // Iterate through the map and print all key-value pairs
    cout << "All entries in the age map:" << endl;
    for (const auto &entry : ageMap)
    {
        cout << entry.first << ": " << entry.second << endl;
    }

    // Check if a key exists in the map
    string name = "David";
    if (ageMap.find(name) != ageMap.end())
    {
        cout << name << "'s age: " << ageMap[name] << endl;
    }
    else
    {
        cout << name << " not found in the age map." << endl;
    }

    // Remove a key-value pair from the map
    ageMap.erase("Bob");
    cout << "After removing Bob, the age map contains:" << endl;
    for (const auto &entry : ageMap)
    {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
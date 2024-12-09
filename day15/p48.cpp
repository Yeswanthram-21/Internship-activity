/*
Internship activity - <Day 15>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q4.c++ unordered map program for Add elements
Access elements
Change elements
Remove elements through iterators

*/

#include <iostream>
#include <unordered_map>
#include <iterator>

using namespace std;

int main() {
    unordered_map<int, int> myMap;  
    int key, value, newValue;

    cout << "Enter the number of key-value pairs to add: ";
    int numElements;
    cin >> numElements;

    for (int i = 0; i < numElements; ++i) {
        cout << "Enter key and value to add: ";
        cin >> key >> value;
        myMap[key] = value;  
    }

    cout << "\nElements in the map (key -> value): ";
    if (myMap.empty()) {
        cout << "The map is empty.\n";
    } else {
        for (auto it = myMap.begin(); it != myMap.end(); ++it) {
            cout << it->first << " -> " << it->second << " | ";
        }
        cout << endl;
    }

    cout << "\nEnter the key of the element you want to change: ";
    cin >> key;

    if (myMap.find(key) != myMap.end()) {
        cout << "Enter the new value for key " << key << ": ";
        cin >> newValue;
        myMap[key] = newValue;  
        cout << "Key " << key << " value changed to " << newValue << ".\n";
    } else {
        cout << "Key " << key << " not found.\n";
    }

    cout << "\nEnter the key you want to remove: ";
    cin >> key;

    if (myMap.find(key) != myMap.end()) {
        myMap.erase(key); 
        cout << "Key " << key << " removed.\n";
    } else {
        cout << "Key " << key << " not found.\n";
    }

    cout << "\nFinal elements in the map (key -> value): ";
    if (myMap.empty()) {
        cout << "The map is empty.\n";
    } else {
        for (auto it = myMap.begin(); it != myMap.end(); ++it) {
            cout << it->first << " -> " << it->second << " | ";
        }
        cout << endl;
    }

    return 0;
}

Output:
Enter the number of key-value pairs to add: 4
Enter key and value to add: 1 5
Enter key and value to add: 2 6
Enter key and value to add: 3 7
Enter key and value to add: 4 8

Elements in the map (key -> value):
 4 -> 8 
 3 -> 7 
 2 -> 6 
 1 -> 5 

Enter the key of the element you want to change: 1
Enter the new value for key 1: 9
Key 1 value changed to 9.

Enter the key you want to remove: 4
Key 4 removed.

Final elements in the map (key -> value): 
 3 -> 7 
 2 -> 6 
 1 -> 9 
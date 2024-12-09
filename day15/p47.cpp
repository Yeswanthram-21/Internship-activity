/*
Internship activity - <Day 15>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q3.c++ unordered set program for Add elements
Access elements
Change elements
Remove elements through iterators

*/

#include <iostream>
#include <unordered_set>
#include <iterator>

using namespace std;

int main() {
    unordered_set<int> mySet;
    int value, newValue;

    cout << "Enter the number of elements to add: ";
    int numElements;
    cin >> numElements;

    for (int i = 0; i < numElements; ++i) {
        cout << "Enter element to add: ";
        cin >> value;
        mySet.insert(value);
    }

    cout << "\nElements in the set: ";
    if (mySet.empty()) {
        cout << "The set is empty.\n";
    } else {
        for (auto it = mySet.begin(); it != mySet.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    cout << "\nEnter the element you want to change: ";
    cin >> value;

    if (mySet.find(value) != mySet.end()) {
        cout << "Enter the new value: ";
        cin >> newValue;
        
        mySet.erase(value);
        mySet.insert(newValue);
        cout << "Element " << value << " changed to " << newValue << ".\n";
    } else {
        cout << "Element " << value << " not found.\n";
    }

    cout << "\nEnter the element you want to remove: ";
    cin >> value;

    if (mySet.find(value) != mySet.end()) {
        mySet.erase(value);
        cout << "Element " << value << " removed.\n";
    } else {
        cout << "Element " << value << " not found.\n";
    }

    cout << "\nFinal elements in the set: ";
    if (mySet.empty()) {
        cout << "The set is empty.\n";
    } else {
        for (auto it = mySet.begin(); it != mySet.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}

Output:

Enter the number of elements to add: 5
Enter element to add: 4
Enter element to add: 9
Enter element to add: 6
Enter element to add: 7
Enter element to add: 3

Elements in the set: 3 7 6 9 4 

Enter the element you want to change: 4
Enter the new value: 1
Element 4 changed to 1.

Enter the element you want to remove: 9
Element 9 removed.

Final elements in the set: 1 3 7 6 

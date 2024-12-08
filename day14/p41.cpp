/*
Internship activity - <Day 14>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q1.c++ vector program for Add elements
Access elements
Change elements
Remove elements through iterators

*/
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> vec;
    int element, position;

    cout << "Enter number of elements to add: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        vec.push_back(element);
    }

    cout << "\nAccess elements by index\n";
    cout << "Enter the index to access an element: ";
    cin >> position;
    if (position >= 0 && position < vec.size()) {
        vector<int>::iterator it = vec.begin() + position;
        cout << "Element at index " << position << " is: " << *it << endl;
    } else {
        cout << "Invalid index!\n";
    }

    cout << "\nChange an element in the vector\n";
    cout << "Enter the index of the element to change: ";
    cin >> position;
    if (position >= 0 && position < vec.size()) {
        cout << "Enter the new value: ";
        cin >> element;
        vector<int>::iterator it = vec.begin() + position;
        *it = element;
        cout << "Element changed at index " << position << " to " << *it << endl;
    } else {
        cout << "Invalid index!\n";
    }

    cout << "\nRemove an element from the vector\n";
    cout << "Enter the index of the element to remove: ";
    cin >> position;
    if (position >= 0 && position < vec.size()) {
        vector<int>::iterator it = vec.begin() + position;
        vec.erase(it);
        cout << "Element at index " << position << " removed.\n";
    } else {
        cout << "Invalid index!\n";
    }

    cout << "\nFinal vector elements: ";
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

Output:
Enter number of elements to add: 5
Enter element 1: 1
Enter element 2: 2
Enter element 3: 3
Enter element 4: 4
Enter element 5: 5

Access elements by index
Enter the index to access an element: 3
Element at index 3 is: 4

Change an element in the vector
Enter the index of the element to change: 4
Enter the new value: 8
Element changed at index 4 to 8

Remove an element from the vector
Enter the index of the element to remove: 0
Element at index 0 removed.

Final vector elements: 2 3 4 8 
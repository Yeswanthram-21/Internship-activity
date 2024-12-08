/*
Internship activity - <Day 14>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q3.c++ set program for Add elements
Access elements
Change elements
Remove elements through iterators

*/

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main() {
    set<int> s;
    int element, position;

    cout << "Enter number of elements to add: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        s.insert(element); 
    }
    cout << "\nAccess elements\n";
    cout << "The elements in the set are: ";
    for (const int& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "\nChange an element in the set\n";
    cout << "Enter the element to remove: ";
    cin >> element;
    auto it = s.find(element);
    if (it != s.end()) {
        s.erase(it); 
        cout << "Enter the new value to insert: ";
        cin >> element;
        s.insert(element); 
        cout << "Element changed to " << element << endl;
    } else {
        cout << "Element not found in the set!\n";
    }

    cout << "\nRemove an element from the set\n";
    cout << "Enter the element to remove: ";
    cin >> element;
    it = s.find(element);
    if (it != s.end()) {
        s.erase(it); 
        cout << "Element " << element << " removed.\n";
    } else {
        cout << "Element not found in the set!\n";
    }

    cout << "\nFinal set elements: ";
    for (const int& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}

Output:
Enter number of elements to add: 5
Enter element 1: 6
Enter element 2: 7
Enter element 3: 8
Enter element 4: 9
Enter element 5: 0

Access elements
The elements in the set are: 0 6 7 8 9 

Change an element in the set
Enter the element to remove: 6
Enter the new value to insert: 4
Element changed to 4

Remove an element from the set
Enter the element to remove: 8
Element 8 removed.

Final set elements: 0 4 7 9 

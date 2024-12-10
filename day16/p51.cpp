/*
Internship activity - <Day 16>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q3.c++ set program for Add elements
Access elements
Change elements
Remove elements through iterators using exception handling try,catch,throw.

*/
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int element;

    cout << "Enter number of elements to add: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        s.insert(element); 
    }

    try {
        cout << "\nAccess elements in the set\n";
        cout << "Enter the index to access an element: ";
        int position;
        cin >> position;
        
        if (position < 0 || position >= s.size()) {
            throw out_of_range("Invalid index for access.");
        }

        set<int>::iterator it = s.begin();
        for (int i = 0; i < position; ++i) {
            ++it; 
        }
        cout << "Element at index " << position << " is: " << *it << endl;

        cout << "\nModify an element in the set\n";
        cout << "Enter the index of the element to modify: ";
        cin >> position;
        if (position < 0 || position >= s.size()) {
            throw out_of_range("Invalid index for modification.");
        }

        set<int>::iterator it2 = s.begin();
        for (int i = 0; i < position; ++i) {
            ++it2; 
        }
        cout << "Enter the new value: ";
        cin >> element;
        s.erase(it2);
       
        s.insert(element);
        cout << "Element modified to: " << element << endl;
        
        cout << "\nRemove an element from the set\n";
        cout << "Enter the index of the element to remove: ";
        cin >> position;
        if (position < 0 || position >= s.size()) {
            throw out_of_range("Invalid index for removal.");
        }

        set<int>::iterator it3 = s.begin();
        for (int i = 0; i < position; ++i) {
            ++it3;
        }
        s.erase(it3);
        cout << "Element removed from the set.\n";

        cout << "\nFinal set elements: ";
        for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
            cout << *it << " "; 
        }
        cout << endl;

    } catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    } catch (...) {
        cout << "An unexpected error occurred." << endl;
    }

    return 0;
}

Output:

Enter number of elements to add: 5
Enter element 1: 9
Enter element 2: 8
Enter element 3: 7
Enter element 4: 6
Enter element 5: 5

Access elements in the set
Enter the index to access an element: 3
Element at index 3 is: 8

Modify an element in the set
Enter the index of the element to modify: 1
Enter the new value: 7
Element modified to: 7

Remove an element from the set
Enter the index of the element to remove: 1
Element removed from the set.

Final set elements: 5 8 9 
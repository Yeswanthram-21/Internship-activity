/*Internship activity - <Day 3>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q4.Demonstrate Function to reverse the elements of an array using pointers. 

*/

#include <iostream>
using namespace std;
void reverseArray(int* arr, int size) {
    int* start = arr;            
    int* end = arr + size - 1;  
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

Output:
Enter the size of the array: 5
Enter the elements of the array: 1 2 3 4 5
Original array: 1 2 3 4 5 
Reversed array: 5 4 3 2 1 

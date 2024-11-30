/*Internship activity - <Day 6>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q4.c++ program to find the maximum and minimum element in the array.

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = arr[0], smallest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }
    
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;
    
    return 0;
}

Output:
Enter the size of the array: 5
Enter elements of the array: 1 2 3 7 8
Largest element: 8
Smallest element: 1
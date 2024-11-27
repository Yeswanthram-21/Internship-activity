/*Internship activity - <Day 3>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q5. Write C program to sort an array of integers in ascending or descending order using a callback
function to compare the elements.  

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool ascending(int a, int b) {
    return a < b; 
}
bool descending(int a, int b) {
    return a > b; 
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n); 
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), ascending);
    cout << "Array sorted in ascending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end(), descending);
    cout << "Array sorted in descending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

output:
Enter the number of elements: 5
Enter 5 elements:
3 8 4 9 6
Array sorted in ascending order:
3 4 6 8 9 
Array sorted in descending order:
9 8 6 4 3 

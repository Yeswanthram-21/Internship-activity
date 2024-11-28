/*Internship activity - <Day 4>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 
 
Q5:find missing number in a sequence in array in c++ using pointers.

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the total number of elements (n) in the sequence: ";
    cin >> n;
    int* arr = new int[n - 1];
    cout << "Enter the " << n - 1 << " elements of the sequence: ";
    for (int i = 0; i < n - 1; ++i) {
        cin >> *(arr + i);  
    }
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        actual_sum += *(arr + i);  
    }
    int missing_number = expected_sum - actual_sum;
    cout << "The missing number in the sequence is: " << missing_number << endl;
    return 0;
}

Output:
Enter the total number of elements (n) in the sequence: 5
Enter the 4 elements of the sequence: 1 3 4 5
The missing number in the sequence is: 2


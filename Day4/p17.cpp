/*Internship activity - <Day 4>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 


Q2.C++ program to find the mean, median, and mode of a set of numbers.

*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    double mean = sum / n;
    cout << "Mean: " << mean << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    double median;
    if (n % 2 == 0) {
        median = (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    } else {
        median = nums[n / 2];
    }
    cout << "Median: " << median << endl;
}
 
Output:
Enter the number of elements: 5
Enter the elements: 1 2 3 4 5
Mean: 3
Median: 3

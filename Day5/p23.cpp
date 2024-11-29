/*
*Internship activity - <Day 5>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q3.C++ program to find the value of ceil,floor,fmod,trunc.

*/
#include <iostream>
#include <cmath>  // For ceil(), floor(), fmod(), trunc()

using namespace std;

int main() {
    int choice;
    double x, y, result;

    cout << "Enter a number (x): ";
    cin >> x;
    result = ceil(x);
    cout << "The rounded-up value of " << x << " is " << result << endl;
    

    cout << "Enter a number (x): ";
    cin >> x;
    result = floor(x);
    cout << "The rounded-down value of " << x << " is " << result << endl;
            
    cout << "Enter the numerator (x): ";
    cin >> x;
    cout << "Enter the denominator (y): ";
    cin >> y;
    result = fmod(x, y);
    cout << "The remainder of " << x << " divided by " << y << " is " << result << endl;
            
    cout << "Enter a number (x): ";
    cin >> x;
    result = trunc(x);
    cout << "The truncated value of " << x << " is " << result << endl;
            


    return 0;
}

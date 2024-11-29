/*
*Internship activity - <Day 5>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q4.C++ program to find the value of copysign,nan,nextafter,nexttoward.

*/

#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double x, y, result;
    
    cout << "Enter number x: ";
    cin >> x;
    cout << "Enter number y: ";
    cin >> y;
    result = copysign(x, y);
    cout << "copysign(" << x << ", " << y << ") = " << result << endl;
            
            
    cout << "Enter a string (for NaN generation): ";
    string s;
    cin >> s;
    result = nan(s.c_str());
    cout << "Generated NaN: " << result << endl;
            
            
    cout << "Enter number x: ";
    cin >> x;
    cout << "Enter number y: ";
    cin >> y;
    result = nextafter(x, y);
    cout << "nextafter(" << x << ", " << y << ") = " << result << endl;
            
    cout << "Enter number x: ";
    cin >> x;
    cout << "Enter number y (precision target): ";
    cin >> y;
    result = nexttoward(x, y);
    cout << "nexttoward(" << x << ", " << y << ") = " << result << endl;
            

    return 0;
}

Output:
Enter number x: 6
Enter number y: -7
copysign(6, -7) = -6
Enter a string (for NaN generation): string
Generated NaN: nan
Enter number x: 2.0
Enter number y: 3.0
nextafter(2, 3) = 2
Enter number x: 1.0
Enter number y (precision target): 2.0
nexttoward(1, 2) = 1
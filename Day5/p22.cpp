*Internship activity - <Day 5>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q2. C++ program to find the value of pow,sqrt,cbrt,hypot.

*/

#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    
    double x, y, result;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (y): ";
    cin >> y;
    result = pow(x, y);
    cout << x << " raised to the power of " << y << " is " << result << endl;
            
    cout << "Enter a number (x): ";
    cin >> x;
    if (x < 0) {
        cout << "Square root of negative numbers is not defined in real numbers!" << endl;
    } else {
        result = sqrt(x);
        cout << "Square root of " << x << " is " << result << endl;
    }
    cout << "Enter a number (x): ";
    cin >> x;
    result = cbrt(x);
    cout << "Cubic root of " << x << " is " << result << endl;
            
    cout << "Enter side 1 (x): ";
    cin >> x;
    cout << "Enter side 2 (y): ";
    cin >> y;
    result = hypot(x, y);
    cout << "The length of the hypotenuse is " << result << endl;

    return 0;
}

Output:
Enter base (x): 2
Enter exponent (y): 3
2 raised to the power of 3 is 8
Enter a number (x): 64
Square root of 64 is 8
Enter a number (x): 27
Cubic root of 27 is 3
Enter side 1 (x): 3
Enter side 2 (y): 4
The length of the hypotenuse is 5

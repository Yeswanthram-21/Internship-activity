/*
*Internship activity - <Day 5>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q5.C++ program to find the value of fdim,fmax,fmin.
   C++ program to find the value of abs,fma,remainder.

*/
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    // Declare variables to store user input
    double num1, num2;

    // Ask user for input
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate positive difference, maximum and minimum values
    double positive_diff = fdim(num1, num2); // fdim function computes positive difference
    double maximum_value = fmax(num1, num2); // fmax function computes maximum value
    double minimum_value = fmin(num1, num2); // fmin function computes minimum value

    // Output the results
    cout << "Positive difference (fdim): " << positive_diff << endl;
    cout << "Maximum value (fmax): " << maximum_value << endl;
    cout << "Minimum value (fmin): " << minimum_value << endl;

    return 0;
}
/*
Output:
Enter the first number: 5
Enter the second number: 4
Positive difference (fdim): 1
Maximum value (fmax): 5
Minimum value (fmin): 4
*/

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double num1, num2, num3,x;

    cout << "Enter the first number (num1): ";
    cin >> num1;
    
    cout << "Enter the second number (num2): ";
    cin >> num2;

    cout << "Enter the third number (num3): ";
    cin >> num3;
    cout << "Enter the third number x ";
    cin>>x;
    double absolute_value = abs(x);  
    
    double multiply_add = fma(num1, num2, num3);  
    
    double remainder_value = remainder(num1, num2);  
    
    cout << "Absolute value (abs) of num1: " << absolute_value << endl;
    cout << "Multiply-add (fma): " << multiply_add << endl;
    cout << "Remainder (remainder) when num1 is divided by num2: " << remainder_value << endl;

    return 0;
}
/*
Output:
Enter the first number (num1): 8
Enter the second number (num2): 4
Enter the third number (num3): 3
Enter the third number x -5
Absolute value (abs) of num1: 5
Multiply-add (fma): 35
Remainder (remainder) when num1 is divided by num2: 0
*/



/*Intership activity - <Day 1>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R */

 Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.

#include<iostream> 
using namespace std;
int main() 
{
    float kmph, miph; 
    cin >> kmph; 
    miph = (kmph * 0.6213712); 
    cout << " The " << kmph << " Km./hr. means " << miph << " Miles/hr." << endl;
    cout << endl; 
    return 0; 
}

Input the distance in kilometer : 25                                   
 The 25 Km./hr. means 15.5343 Miles/hr.
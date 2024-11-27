/*Intership activity - <Day 1>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R */


Q3. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.

#include <iostream> 
using namespace std; 
int main() 
{
    float kel, frh; 
    cin >> kel; 
    frh = (9.0 / 5) * (kel - 273.15) + 32; 
    cout << " The temperature in Kelvin    : " << kel << endl; 
    cout << " The temperature in Fahrenheit : " << frh << endl; 
    cout << endl;
    return 0; 
}

373
 The temperature in Kelvin    : 373
 The temperature in Fahrenheit : 211.73




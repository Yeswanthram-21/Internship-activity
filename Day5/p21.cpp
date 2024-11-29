*Internship activity - <Day 5>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q1. C++ program to find the value of sin,cos,tan,asin,acos,atan,cosh,tanh.
*/

#include <iostream> 
#include <math.h> 
using namespace std; 

int main() 
{ 
	double x;
	cout<<"Enter the value of x: ";
	cin>>x;
	cout << "Sine value of x "
		<< sin(x) << endl; 
	cout << "Cosine value of x "
		<< cos(x) << endl; 
	cout << "Tangent value of x "
		<< tan(x) << endl; 

	cout << "Arc Cosine value of x "
		<< acos(x) << endl; 
	cout << "Arc Sine value of x "
		<< asin(x) << endl; 
	cout << "Arc Tangent value of x "
		<< atan(x) << endl; 
		
	cout << "Hyperbolic Cosine of x "
		<< cosh(x) << endl; 
	cout << "Hyperbolic tangent of x "
		<< tanh(x) << endl; 

	return 0; 
} 

Output:

Enter the value of x: 1
Sine value of x 0.841471
Cosine value of x 0.540302
Tangent value of x 1.55741
Arc Cosine value of x 0
Arc Sine value of x 1.5708
Arc Tangent value of x 0.785398
Hyperbolic Cosine of x 1.54308
Hyperbolic tangent of x 0.761594
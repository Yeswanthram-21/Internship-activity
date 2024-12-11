/*
Internship activity - <Day 17>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q3.write a c++ program for 
find the distance between one point to another point and one line to another line.
*/

#include <iostream>
#include <cmath>
using namespace std;

float pointToPointDistance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


float lineToLineDistance(float A, float B, float C1, float C2)
{
    
    return fabs(C2 - C1) / sqrt(A * A + B * B);
}

int main()
{
    
    float x1, y1, x2, y2;
    cout << "Enter coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;

    float distancePointToPoint = pointToPointDistance(x1, y1, x2, y2);
    cout << "The distance between the two points is: " << distancePointToPoint << endl;

    float A, B, C1, C2;
    cout << "Enter coefficients for the first line (Ax + By + C1 = 0): ";
    cin >> A >> B >> C1;

    cout << "Enter coefficients for the second line (Ax + By + C2 = 0): ";
    cin >> A >> B >> C2;

    if (A == 0 && B == 0)
    {
        cout << "Invalid input, line coefficients cannot be zero simultaneously!" << endl;
        return 0;
    }

    
    float distanceLineToLine = lineToLineDistance(A, B, C1, C2);
    cout << "The distance between the two lines is: " << distanceLineToLine << endl;

    return 0;
}


Output:

Enter coordinates of the first point (x1 y1): 1 3
Enter coordinates of the second point (x2 y2): 3 4
The distance between the two points is: 2.23607
Enter coefficients for the first line (Ax + By + C1 = 0): 1 2 3
Enter coefficients for the second line (Ax + By + C2 = 0): 6 7 8
The distance between the two lines is: 0.542326
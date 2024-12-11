/*
Internship activity - <Day 17>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q2.write a c++ program for 
find the Volume and Surface area of Frustum of Cone 
*/


#include <iostream>
using namespace std;

float pi = 3.14159;

float volume(float r, float R, float h)
{
    return (float(1) / float(3)) * pi * h * (r * r + R * R + r * R);
}

float curved_surface_area(float r, float R, float l)
{
    return pi * l * (R + r);
}

float total_surface_area(float r, float R, float l, float h)
{
    return pi * l * (R + r) + pi * (r * r + R * R);
}

int main()
{
    float small_radius, big_radius, slant_height, height;

    cout << "Enter the radius of the smaller base (r): ";
    cin >> small_radius;

    cout << "Enter the radius of the larger base (R): ";
    cin >> big_radius;

    cout << "Enter the slant height (l): ";
    cin >> slant_height;

    cout << "Enter the height of the frustum (h): ";
    cin >> height;

    cout << "Volume of Frustum of Cone: "
         << volume(small_radius, big_radius, height) << endl;

    cout << "Curved Surface Area of Frustum of Cone: "
         << curved_surface_area(small_radius, big_radius, slant_height) << endl;

    cout << "Total Surface Area of Frustum of Cone: "
         << total_surface_area(small_radius, big_radius, slant_height, height) << endl;

    return 0;
}


Output:

Enter the radius of the smaller base (r): 4
Enter the radius of the larger base (R): 6
Enter the slant height (l): 7
Enter the height of the frustum (h): 8
Volume of Frustum of Cone: 636.696
Curved Surface Area of Frustum of Cone: 219.911
Total Surface Area of Frustum of Cone: 383.274

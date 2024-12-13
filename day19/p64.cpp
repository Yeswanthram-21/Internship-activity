/*
Internship activity - <Day 19>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 


Q2.write a c++ program for 
Matrix multiplication.

*/

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

  
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}


output:

Enter rows and columns for first matrix: 3 3
Enter rows and columns for second matrix: 3 3

Enter elements of matrix 1:
Enter element a11 : 1
Enter element a12 : 2
Enter element a13 : 3
Enter element a21 : 4
Enter element a22 : 5
Enter element a23 : 6
Enter element a31 : 7
Enter element a32 : 8
Enter element a33 : 9

Enter elements of matrix 2:
Enter element b11 : 9
Enter element b12 : 8
Enter element b13 : 7
Enter element b21 : 6
Enter element b22 : 5
Enter element b23 : 4
Enter element b31 : 3
Enter element b32 : 2
Enter element b33 : 1

Output Matrix: 
 30 24 18
 84 69 54
 138 114 90
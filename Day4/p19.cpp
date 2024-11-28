/*Internship activity - <Day 4>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 
C++ program to input a number and find the sum of even digits using pointer variables.


*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i,n,s,d,*x,*nm,*sum,*dg;
    x=&i;
    nm=&n;
    sum=&s;
    dg=&d;
    *sum=0;

    cout<<"Enter a number ";
    cin>>*nm;

    while(*nm>0)
    {
        *dg=*nm%10;
        if(*dg % 2==0)
        {
            *sum=*sum+*dg;
        }
        *nm=*nm/10;
    }

    cout<<"Sum of even digits = "<<*sum;
    return 0;
}

Output:
Enter a number 67823
Sum of even digits = 16
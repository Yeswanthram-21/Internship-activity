/*Internship activity - <Day 4>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q1.C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays
*/

#include <iostream>  
using namespace std;  
int main()  
{  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
cout<<"enter the first matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiply of the matrix=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}      
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}    
return 0;  
}    

Output:
enter the number of row=3
enter the number of column=3
enter the first matrix element=
1 2 3
4 5 6 
7 8 9
enter the second matrix element=
2 4 6
1 2 3
4 5 6
multiply of the matrix=
16 23 30 
37 56 75 
58 89 120 
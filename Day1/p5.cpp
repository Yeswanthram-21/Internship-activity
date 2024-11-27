/*Internship activity - <Day 1>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R */

Q5. Write C++ Program do following task
1. Convert Hex number to binary
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char hexDecNum[10];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    cout<<"\nEquivalent Binary Value = ";
    while(hexDecNum[i])
    {
        switch(hexDecNum[i])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ("<<hexDecNum[i]<<")--";
        }
        i++;
    }
    cout<<endl;
    return 0;
}
Enter the Hexadecimal Number: 1bc6

Equivalent Binary Value = 0001101111000110

2. Quadratic equation solving
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
Enter coefficients a, b and c: 4
5
6
Roots are complex and different.
x1 = -0.625+1.05327i
x2 = -0.625-1.05327i

3. Hexadecimal to decimal
#include <bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string hexVal)
{
    int len = hexVal.size();
    int base = 1;

    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;
            base = base * 16;
        }
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
            base = base * 16;
        }
    }
    return dec_val;
}
int main()
{
    string hexNum = "1A";
    cout << (hexadecimalToDecimal(hexNum));
    return 0;
}

output: 
26

4. Decimal to hexa
#include <iostream>
using namespace std;
string decToHexa(int n)
{
    string ans = "";
    while (n != 0) {
        int rem = 0;
        char ch;
        rem = n % 16;
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }
        ans += ch;
        n = n / 16;
    }
    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
      swap(ans[i], ans[j]);
      i++;
      j--;
    }
    return ans;
}
int main()
{
    int n = 2545;

    cout << decToHexa(n);

    return 0;
}

Output:
9F1

5. Find square root of a number without using sqrt fun

#include <bits/stdc++.h>
using namespace std;

double findSqrt(double x)
{
	if (x < 2)
		return x;
	double y = x;
	double z = (y + (x / y)) / 2;
	while (abs(y - z) >= 0.00001) {
		y = z;
		z = (y + (x / y)) / 2;
	}
	return z;
}

int main()
{

	double n = 6;

	double ans = findSqrt(n);
	cout << setprecision(6) << ans
		<< " is the square root of 6" << endl;
	return 0;
}

  2.44949 is the square root of 6

6. print series using structure


1 s
2 s t
3 s i
4 s t
5 s
6 s t i
7 s
8 s t
9 s i
10 s t 

#include <iostream>
using namespace std;
struct Series {
    char s = 's';
    char t = 't';
    char i = 'i';
};

int main() {
    Series series; 
    for (int n = 1; n <= 10; n++) {
        cout << n << " " << series.s; 
        if (n % 2 == 0) {
            cout << " " << series.t;
        }
        if (n % 3 == 0) {
            cout << " " << series.i;
        }
        cout << endl; 
    }

    return 0;
}


7. Print numbers from 1 to 10 without using loops or goto statements

#include <stdio.h>
int main()
{
	static int i = 1;
	if (i <= 10) {
		printf("%d ", i++);
		main();
	}
	return 0;
}

1 2 3 4 5 6 7 8 9 10 



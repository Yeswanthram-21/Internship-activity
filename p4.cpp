/*Intership activity - <Day 1>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R */

Q4. Write C++ Program do following task
1. Largest of 3 nos using conditional op
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if (a >= b) {
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }

    return 0;
}
Output:
2
3
4

4

2. Largest of 2 nos without branching

#include<iostream>
using std::cout;
using std::endl;

int findMax(int x, int y)
{
    return x ^ ((x ^ y) & -(x < y));
}
int main()
{
    int x = 15;
    int y = 6;
    cout<<"Maximum of "<<x <<" and "<<y<<" is ";
    const int maxValue = findMax(x,y);
    cout<<maxValue<<endl;
    return 0;
}

Maximum of 15 and 6 is 15

3. To check for equality of two numbers without using arithmetic or comparison operator
#include <iostream>
using namespace std;
int main() 
{
	int A,B;
	cin>>A>>B;
	int diff = A - B;
    if(diff)
	   cout<<"No";
    else
	   cout<<"Yes";
	return 0;
}

4
5
No

4. Print “Welcome” without using semicolon in c/c++

#include <iostream>
using namespace std;

int main() {
    if (cout << "Welcome") {} 
    return 0;
}

Welcome

5. To check if the given number is even without using arithmetic or relational operators.
#include <iostream>
using namespace std;
bool isEven(int n)
{
	return ((n / 2) * 2 == n);
}
int main()
{
	int n;
	cin>>n;
	isEven(n) ? cout << "Even" : cout << "Odd";
	return 0;
}

60
Even
51
Odd

6. Print grade using switch case
#include <iostream>
using namespace std;

// Grades Program Switch

int main()
{
    int score;
    
    cout << "Please enter a score: ";
    cin >> score;
    
    switch (score)
    {
        case 'A': (score == 100);
            cout << "\nYou got an A\n";
            break;
        
        case 'B': (score < 99 && score >= 90);
            cout << "\nYou got an B\n";
            break;
            
        case 'C': (score < 90 && score >= 80);
            cout << "\nYou got a C\n";
            break;
            
        case 'D': (score < 80 && score >= 70);
            cout << "\nYou got a D\n";
            break;
        case 'E': (score<70);
            cout<<"\n You got a E\n";
            break;

    }
            
    return 0;
}

Please enter a score: 100
You got an A
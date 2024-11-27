/*Internship activity - <Day 3>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q2. Write a function "print_pyramid(...)" which takes a single integer argument "height" and displays a
"pyramid" of this height made up of of "*" characters on the screen. 

*/
#include <iostream>
using namespace std;
void print_pyramid(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height;
    print_pyramid(height);
    return 0;
}

Output:
Enter the height of the pyramid: 6
     *
    ***
   *****
  *******
 *********
***********


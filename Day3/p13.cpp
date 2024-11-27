/*Internship activity - <Day 3>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Test the function with a simple "driver" program, which should be able to reproduce the following
example output:
 This program prints a 'pyramid' shape of a specified height on the screen.
 **
 ****
 ******
 ********
 **********
 ************
*/

#include <iostream>
using namespace std;
void print_pyramid(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= 2 * i; j++) {
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

Enter the height of the pyramid: 7
**
****
******
********
**********
************
**************
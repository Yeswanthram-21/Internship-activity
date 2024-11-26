/*Intership activity - <Day 2>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Print the Array
Given the current program

#include <iostream>
using namespace std;

int main() {
  
    string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
    //add code below this line
  
  
  
    //add code above this line
  
    return 0;
  
}

Complete the program so that the resulting output will be:

Pacific
Atlantic
Indian
Arctic
Southern

Requirements:
You cannot make any changes to the code that already exists. 
If you accidentally delete any existing code, you can copy and paste 
the entire program from above.
You must include the array name oceans in your code so that each element 
of the array can be printed.
You cannot print the individual strings Pacific, Atlantic, Indian, Arctic, and Southern in your code. Instead, refer to the array elements themselves.
Each element should be printed with a newline.*/

#include <iostream>
using namespace std;

int main() {
  
    string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
    //add code below this line
    for(int i = 0; i < 5; i++) {
        cout << oceans[i] << endl;
    }
    //add code above this line
  
    return 0;
  
}




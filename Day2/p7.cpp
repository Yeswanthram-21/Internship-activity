/*Intership activity - <Day 2>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 
Array to Vector
You want to convert the oceans array into a vector. Here is what you have so far:

#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line



  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}
Complete the program so that when printing oceans, you get the output:

Pacific
Atlantic
Indian
Arctic
Southern

Requirements:
You cannot make any changes to the code that already exists. 
If you accidentally delete any existing code, you can copy and paste the entire program from above.
You must include at least ONE push_back() function, 
at least ONE pop_back() function, and at least ONE at() function in your program.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line
  oceans.push_back("Pacific"); // add Pacific
  oceans.push_back("Atlantic"); // add Atlantic
  oceans.push_back("Indian");   // add Indian
  oceans.push_back("Arctic");   // add Arctic
  oceans.push_back("Southern"); // add Southern
  
  oceans.pop_back(); // remove Southern
  
  for (auto a : oceans) {
    cout << a << endl;
  // Access each element using at() and print
  }
  return 0;
}




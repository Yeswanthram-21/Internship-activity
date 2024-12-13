/*
Internship activity - <Day 19>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 


Q4.write a c++ program for 
perform the following string operations

Function	Description
copy()	Copies characters from a string into a char array.
capacity()	Returns the total capacity of the string.
replace()	Replaces part of the string with another string.
empty()	Checks if the string is empty.

*/



#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    int length = str.length();
    char charArray[length + 1]; 
    str.copy(charArray, length);
    charArray[length] = '\0';  
    cout << "Copied string to char array: " << charArray << endl;
    
    cout << "The capacity of the string is: " << str.capacity() << endl;

    string toReplace, replacement;
    cout << "Enter a substring to replace: ";
    getline(cin, toReplace);
    cout << "Enter the replacement string: ";
    getline(cin, replacement);
    
    size_t pos = str.find(toReplace);
    if (pos != string::npos) {
        str.replace(pos, toReplace.length(), replacement);
        cout << "Updated string after replacement: " << str << endl;
    } else {
        cout << "Substring to replace not found!" << endl;
    }

    if (str.empty()) {
        cout << "The string is empty." << endl;
    } else {
        cout << "The string is not empty." << endl;
    }

    return 0;
}


Output:

Enter a string: hi hello

Copied string to char array: hi hello

The capacity of the string is: 15

Enter a substring to replace: hello

Enter the replacement string: how are you

Updated string after replacement: hi how are you

The string is not empty.
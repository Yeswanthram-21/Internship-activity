/*
Internship activity - <Day 18>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 


Q4.write a c++ program for 

arithmetic operations on pointers in C++. These arithmetic operations are:
Increment Operator (++)
Decrement Operator (--)
Addition (+)
Subtraction (-)

*/
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements you want to input: ";
    cin >> size;

    int* arr = new int[size]; 
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    int* ptr = arr;

    
    cout << "\nUsing increment operator (++) on pointer:\n";
    cout << "Initial pointer points to value: " << *ptr << " (address: " << ptr << ")\n";
    ptr++;  
    cout << "After incrementing, pointer points to value: " << *ptr << " (address: " << ptr << ")\n";

    cout << "\nUsing decrement operator (--) on pointer:\n";
    ptr--;  
    cout << "After decrementing, pointer points to value: " << *ptr << " (address: " << ptr << ")\n";

    cout << "\nUsing addition (+) with pointer:\n";
    ptr = arr;  
    ptr = ptr + 2; 
    cout << "After adding 2, pointer points to value: " << *ptr << " (address: " << ptr << ")\n";

  
    cout << "\nUsing subtraction (-) with pointer:\n";
    ptr = ptr - 1; 
    cout << "After subtracting 1, pointer points to value: " << *ptr << " (address: " << ptr << ")\n";

   
    delete[] arr;

    return 0;
}

output:

Enter the number of elements you want to input: 5
Enter the elements of the array:
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Element 5: 5

Using increment operator (++) on pointer:
Initial pointer points to value: 1 (address: 0x6043ebc9cad0)
After incrementing, pointer points to value: 2 (address: 0x6043ebc9cad4)

Using decrement operator (--) on pointer:
After decrementing, pointer points to value: 1 (address: 0x6043ebc9cad0)

Using addition (+) with pointer:
After adding 2, pointer points to value: 3 (address: 0x6043ebc9cad8)

Using subtraction (-) with pointer:
After subtracting 1, pointer points to value: 2 (address: 0x6043ebc9cad4)

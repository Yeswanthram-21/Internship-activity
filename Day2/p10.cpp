/*Internship activity - <Day 2>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Find the Average
You are working to create a program that continuously 
takes in double and integer inputs and adds them to a vector called numList. 
If an input is not a double or an integer type, then 
the program will iterate through numList, add each value to the total, and 
calculate the average (avg). 
Finally, the average is printed with a newline. 
Here is what you have so far:

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
    double input;
    double total = 0;
    double avg = 0;
    vector<double> numList(0);
    
    cout << "Enter double or int to add to total, else find total average:" << endl;
    while (cin >> input) {
    
        // add input into vector
        
        
        
        // your code goes above
    
        cout << "Enter double or int to add to total, else find total average:" << endl;
    }
    
    // iterate through vector, add elements to total, then calculate average
    
    
    
    // your code goes above
    
    cout << avg << endl;
    
    return 0;
  
}
Follow the comments within the code to complete the program. When running your code, you should be able to continuously enter doubles and integers into the Terminal. If you enter a non-double or non-integer, the program should stop and print the average. If no doubles or integers are entered, then the program will print 0.

Sample Outputs:

Sample 1

Enter double or int to add to total, else find total average:
1
Enter double or int to add to total, else find total average:
2
Enter double or int to add to total, else find total average:
3
Enter double or int to add to total, else find total average:
x
2
Sample 2

Enter double or int to add to total, else find total average:
I am entering a non-integer
0
Sample 3

Enter double or int to add to total, else find total average:
-14.5
Enter double or int to add to total, else find total average:
14.5
Enter double or int to add to total, else find total average:
-14
Enter double or int to add to total, else find total average:
14
Enter double or int to add to total, else find total average:
-5.5
Enter double or int to add to total, else find total average:
?
-1.1 */


#include <iostream>
#include <vector>
#include <limits>  // To handle invalid input properly
using namespace std;

int main() {
    double input;
    double total = 0;
    double avg = 0;
    vector<double> numList;  // To store the valid numbers

    cout << "Enter double or int to add to total, else find total average:" << endl;

    while (cin >> input) {  // Continue reading input as long as it's a valid number
        numList.push_back(input);  // Add valid input to vector
        cout << "Enter double or int to add to total, else find total average:" << endl;
    }

    // Handle invalid input (non-numeric) that causes the loop to break
    if (numList.empty()) {
        avg = 0;  // If no valid input, average is 0
    } else {
        // Calculate the total sum
        for (double num : numList) {
            total += num;
        }

        // Calculate average
        avg = total / numList.size();
    }

    cout << avg << endl;  // Output the average
    return 0;
}

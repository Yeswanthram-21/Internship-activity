/*Internship activity - <Day 2>
  Project: Rapido Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 
Row and Column Sums
Given the current code:

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
    int a = atoi((argv[1]));
    int b = atoi((argv[2]));
    int c = atoi((argv[3]));
    int d = atoi((argv[4]));
    int nums[3][3];
    
    //add code below this line



    //add code above this line
    
    int row = sizeof(nums) / sizeof(nums[0]);
    int col = sizeof(nums[0]) / sizeof(int);
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == 2) {
                cout << nums[i][j] << endl;
            }
            else {
                cout << nums[i][j] << " ";
            }
        }
    }
    
    return 0;
  
}
Complete the program so that it takes in 4 integers (a, b, c, and d) 
as arguments, stores them in the 2D array nums, and 
then prints their row, column, and total sums. 
The program should print the integers according to this formula:

(a)   (b)   (a+b)
(c)   (d)   (c+d)
(a+c) (b+d) ((a+b)+(c+d)+(a+c)+(b+d))

// (a+b) is the first row's sum
// (c+d) is the second row's sum
// (a+c) is the first column's sum
// (b+d) is the second column's sum.
// ((a+b)+(c+d)+(a+c)+(b+d)) is the total sum of all rows and columns
For example, arguments 1, 2, 3, and 4 will produce the output:

1 2 3
3 4 7
4 6 20

// 1 + 2 = 3 (first row's sum)
// 3 + 4 = 7 (second row's sum)
// 1 + 3 = 4 (first column's sum)
// 2 + 4 = 6 (second column's sum)
// ((1+2) + (3+4) + (1+3) + (2+4)) = 20 (total sum)
where 3 and 7 are row sums, 4 and 6 are column sums, and 20 is the total sum.

Arguments 9, 8, 7, and 6 will produce the output:

9 8 17
7 6 13
16 14 60

// 9 + 8 = 17 (first row's sum)
// 7 + 6 = 13 (second row's sum)
// 9 + 7 = 16 (first column's sum)
// 8 + 6 = 14 (second column's sum)
// ((9+8) + (7+6) + (9+7) + (8+6)) = 60 (total sum)
where 17 and 13 are row sums, 16 and 14 are column sums, and 60 is the total sum.

Compile and test your code with a few different values

Compile and test with 1,2,3,4

1 2 3
3 4 7
4 6 20
Compile and test with 9,8,7,6

9 8 17
7 6 13
16 14 60
Compile and test with -2,4,6,-12

-2 4 2
6 -12 -6
4 -8 -8
Requirements:

You should not make any changes to the code that already exists. 
If you accidentally delete any existing code, you can copy and paste 
the entire program from above.
You should access and modify the 2D array by assigning 
the correct sums to each row and column indices pair.*/

#include <iostream>
using namespace std;

int main() {
    // Declare variables for the 4 inputs
    int a, b, c, d;

    // Prompt user for input and read the values
    cout << "Enter four integers (a, b, c, d): ";
    cin >> a >> b >> c >> d;

    // Declare and fill the 2D array nums
    int nums[3][3];

    // First row: a, b, and the sum of a and b
    nums[0][0] = a;
    nums[0][1] = b;
    nums[0][2] = a + b;

    // Second row: c, d, and the sum of c and d
    nums[1][0] = c;
    nums[1][1] = d;
    nums[1][2] = c + d;

    // Third row: sums of columns and total sum
    nums[2][0] = a + c;   // Column 1 sum: a + c
    nums[2][1] = b + d;   // Column 2 sum: b + d
    nums[2][2] = (a + b) + (c + d) + (a + c) + (b + d);  // Total sum of all sums

    // Print the 2D array and the sums
    int row = sizeof(nums) / sizeof(nums[0]);
    int col = sizeof(nums[0]) / sizeof(int);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == 2) {
                cout << nums[i][j] << endl;  // Print last element in the row with newline
            } else {
                cout << nums[i][j] << " ";  // Print first and second elements in the row with space
            }
        }
    }

    return 0;
}


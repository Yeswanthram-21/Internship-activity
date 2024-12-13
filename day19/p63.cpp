/*
Internship activity - <Day 19>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 


Q1.write a c++ program for 
Matrix diagonal printing.

*/


#include <iostream>

using namespace std;

void printDiagonalOrder(int matrix[100][100], int rows, int cols) {
   
    for (int startRow = rows - 1; startRow >= 0; --startRow) {
        int row = startRow;
        int col = 0;
       
        while (row < rows && col < cols) {
            cout << matrix[row][col] << " ";
            row++;
            col++;
        }
        cout << endl;
    }

    for (int startCol = 1; startCol < cols; ++startCol) {
        int row = 0;
        int col = startCol;

        while (row < rows && col < cols) {
            cout << matrix[row][col] << " ";
            row++;
            col++;
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    int matrix[100][100]; 
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "The diagonal order output is:" << endl;
    printDiagonalOrder(matrix, rows, cols);

    return 0;
}


Output:

Enter number of rows: 3
Enter number of columns: 3
Enter the elements of the matrix:
1 2 3
4 5 6
7 8 9
The diagonal order output is:
7 
4 8 
1 5 9 
2 6 
3 
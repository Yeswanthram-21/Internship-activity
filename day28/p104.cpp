/*
Internship activity - <Day 28>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q2.write a c++ program for
matrix add,sub,multiplication perform activities using operator overloading.


*/

#include <iostream>
#include <string>
using namespace std;

int N;

class Matrix {
    int arr[rows][cols];

public:
    void input();
    void display();
    void operator+(Matrix x);
    void operator-(Matrix x);
    void operator*(Matrix x);
};

void Matrix::input() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }
}

void Matrix::display() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

void Matrix::operator+(Matrix x) {
    int mat[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = arr[i][j] + x.arr[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

void Matrix::operator-(Matrix x) {
    int mat[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = arr[i][j] - x.arr[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

void Matrix::operator*(Matrix x) {
    int mat[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = 0;
            for (int k = 0; k < N; k++) {
                mat[i][j] += arr[i][k] * x.arr[k][j];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter the dimension of the matrices: ";
    cin >> N;

    Matrix mat1, mat2;

    cout << "Enter elements of first matrix: \n";
    mat1.input();

    cout << "Enter elements of second matrix: \n";
    mat2.input();

    cout << "Addition of matrices: \n";
    mat1 + mat2;

    cout << "Subtraction of matrices: \n";
    mat1 - mat2;

    cout << "Multiplication of matrices: \n";
    mat1 * mat2;

    return 0;
}

Output:

Enter the dimension of the matrices: 3 3
Enter elements of first matrix: 
1 2 3
4 5 6
7 8 9
Enter elements of second matrix: 
1 2 3
4 5 6
7 8 9
Addition of matrices: 
12 2 4 
6 8 10 
12 14 16 
Subtraction of matrices: 
-6 0 0 
0 0 0 
0 0 0 
Multiplication of matrices: 
42 21 27 
69 54 66 
123 90 111 

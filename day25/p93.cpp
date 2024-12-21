/*
Internship activity - <Day 25>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 


Q3.write a c++ program for 
perform Thread Concepts operations includes exception handling Techniques.
*/

#include <iostream>
#include <thread>
#include <stdexcept>
using namespace std;

class BaseTask {
protected:
    int a, b;

public:
    BaseTask(int x, int y) : a(x), b(y) {
        if (x < 0 || y < 0) {
            throw invalid_argument("Negative values are not allowed.");
        }
    }

    virtual void displayTaskInfo() {
        cout << "Base task initialized." << endl;
    }
};

class DerivedTask : public BaseTask {
public:
    DerivedTask(int x, int y) : BaseTask(x, y) {}

    void processSum() {
        int sum = a + b;
        cout << "Sum: " << sum << "\n";
    }

    void processProduct() {
        int product = a * b;
        cout << "Product: " << product << "\n";
    }

    static void staticTask() {
        cout << "Thread executing static task\n";
    }

    void displayTaskInfo() override {
        cout << "Derived task operations started." << endl;
    }
};

void lambdaTask(int x, int y) {
    if (x == y) {
        throw runtime_error("Lambda task encountered equal values.");
    }
    int maxVal = (x > y) ? x : y;
    cout << "Max value: " << maxVal << "\n";
}

void extraTask1(int x, int y) {
    cout << "Extra Task 1: Difference = " << (x - y) << "\n";
}

void extraTask2(int x, int y) {
    cout << "Extra Task 2: Sum of squares = " << (x * x + y * y) << "\n";
}

int main() {
    try {
        int x = 5, y = 3;
        DerivedTask task(x, y);

        task.displayTaskInfo();

        thread t1(&DerivedTask::processSum, &task);
        thread t2(&DerivedTask::processProduct, &task);
        thread t3(DerivedTask::staticTask);

        thread t4([x, y] {
            try {
                lambdaTask(x, y);
            } catch (const exception& e) {
                cout << "Lambda task error: " << e.what() << "\n";
            }
        });

        thread t5(extraTask1, x, y);
        thread t6(extraTask2, x, y);

        t1.join();
        t2.join();

        t3.detach();
        t4.join();
        t5.join();
        t6.join();

        cout << "All threads completed their tasks except the detached thread." << endl;

        cout << "Main thread continues its execution." << endl;

        for (int i = 0; i < 5; ++i) {
            cout << "Main thread task loop iteration: " << i + 1 << "\n";
        }

        cout << "Main thread execution completed." << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
    }

    return 0;
}

Output:

Derived task operations started.
Sum: 8
Product: 15
Thread executing static task
Max value: 5
Extra Task 1: Difference = 2
Extra Task 2: Sum of squares = 34
All threads completed their tasks except the detached thread.
Main thread continues its execution.
Main thread task loop iteration: 1
Main thread task loop iteration: 2
Main thread task loop iteration: 3
Main thread task loop iteration: 4
Main thread task loop iteration: 5
Main thread execution completed.
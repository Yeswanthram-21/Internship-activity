/*
Internship activity - <Day 27>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q4.write a c++ program for
create structure student perform activities using class.


*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
protected:
    string name, rollNo;
    int age;
public:
    Student(string n, string r, int a) : name(n), rollNo(r), age(a) {}
    virtual void display() {
        cout << "Name: " << name << "\nRoll No: " << rollNo << "\nAge: " << age << endl;
    }
    string getName() { return name; }
    string getRollNo() { return rollNo; }
};

class Exam : public Student {
private:
    int marks;
public:
    Exam(string n, string r, int a, int m) : Student(n, r, a), marks(m) {}
    void display() override {
        Student::display();
        cout << "Marks: " << marks << endl;
    }
    int getMarks() { return marks; }
    void updateMarks(int m) { marks = m; }
};

class ExamManager {
private:
    vector<Exam> exams;
public:
    void addExam(Exam e) { exams.push_back(e); }
    void displayAll() {
        if (exams.empty()) cout << "No exam records available.\n";
        else {
            for (auto& exam : exams) {
                exam.display();
                cout << "--------------------------\n";
            }
        }
    }
    void searchByRollNo(string rollNo) {
        bool found = false;
        for (auto& exam : exams) {
            if (exam.getRollNo() == rollNo) {
                exam.display();
                found = true;
                break;
            }
        }
        if (!found) cout << "No student found with Roll No: " << rollNo << endl;
    }
};

int main() {
    ExamManager manager;
    int choice, age, marks;
    string name, rollNo;

    while (true) {
        cout << "\n1. Add Student Exam Record\n2. Display All Records\n3. Search by Roll No\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter name, roll number, age, and marks: ";
                getline(cin, name);
                getline(cin, rollNo);
                cin >> age >> marks;
                manager.addExam(Exam(name, rollNo, age, marks));
                break;
            case 2:
                manager.displayAll();
                break;
            case 3:
                cout << "Enter Roll No to search: ";
                getline(cin, rollNo);
                manager.searchByRollNo(rollNo);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice, try again.\n";
        }
    }
    return 0;
}

Output:

1. Add Student Exam Record
2. Display All Records
3. Search by Roll No
4. Exit
Enter your choice: 1
Enter name, roll number, age, and marks: raja
101
20
100

1. Add Student Exam Record
2. Display All Records
3. Search by Roll No
4. Exit
Enter your choice: 2
Name: raja
Roll No: 101
Age: 20
Marks: 100
--------------------------

1. Add Student Exam Record
2. Display All Records
3. Search by Roll No
4. Exit
Enter your choice: 3
Enter Roll No to search: 101
Name: raja
Roll No: 101
Age: 20
Marks: 100

1. Add Student Exam Record
2. Display All Records
3. Search by Roll No
4. Exit
Enter your choice: 4

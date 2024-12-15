/*
Internship activity - <Day 21>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 


Q3.write a c++ program for 
perform the multi level inheritance for employee details.
*/

#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

class Employee : public Person {
public:
    double salary;

    Employee(string name, int age, double salary)
        : Person(name, age) {
        this->salary = salary;
    }

    void displayEmployeeDetails() {
        displayPersonDetails();
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    Manager(string name, int age, double salary, string department)
        : Employee(name, age, salary) {
        this->department = department;
    }

    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
    }
};

int main() {
    string name, department;
    int age;
    double salary;

    cout << "Enter Manager's Name: ";
    getline(cin, name);

    cout << "Enter Manager's Age: ";
    cin >> age;

    cout << "Enter Manager's Salary: ";
    cin >> salary;
    cin.ignore();  

    cout << "Enter Manager's Department: ";
    getline(cin, department);

    Manager manager1(name, age, salary, department);

    cout << endl;
    manager1.displayManagerDetails();

    return 0;
}

Output:

Enter Manager's Name: kumar
Enter Manager's Age: 40
Enter Manager's Salary: 30000
Enter Manager's Department: IT

Name: kumar
Age: 40 years
Salary: 30000
Department: IT


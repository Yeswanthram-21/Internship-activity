/*
Internship activity - <Day 28>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q3.write a c++ program for
 perform Banking activities using inline functions.


*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    inline void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
            return;
        }
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    inline void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return;
        }
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
    }

    inline void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int accNumber;
    double initialBalance;

    cout << "Welcome to the Banking System!" << endl;
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account(name, accNumber, initialBalance);

    int choice;
    do {
        cout << "\nBanking Menu:" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            double depositAmount;
            cout << "Enter amount to deposit: ";
            cin >> depositAmount;
            account.deposit(depositAmount);
            break;
        }
        case 2: {
            double withdrawAmount;
            cout << "Enter amount to withdraw: ";
            cin >> withdrawAmount;
            account.withdraw(withdrawAmount);
            break;
        }
        case 3:
            account.checkBalance();
            break;
        case 4:
            cout << "Thank you for using the Banking System!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}


Output:

Welcome to the Banking System!
Enter Account Holder Name: raja
Enter Account Number: 12345688
Enter Initial Balance: 1000

Banking Menu:
1. Deposit Money
2. Withdraw Money
3. Check Balance
4. Exit
Enter your choice (1-4): 1
Enter amount to deposit: 100
Deposited: 100 | New Balance: 1100

Banking Menu:
1. Deposit Money
2. Withdraw Money
3. Check Balance
4. Exit
Enter your choice (1-4): 2
Enter amount to withdraw: 200
Withdrawn: 200 | New Balance: 900

Banking Menu:
1. Deposit Money
2. Withdraw Money
3. Check Balance
4. Exit
Enter your choice (1-4): 3
Current Balance: 900

Banking Menu:
1. Deposit Money
2. Withdraw Money
3. Check Balance
4. Exit
Enter your choice (1-4): 4
Thank you for using the Banking System!

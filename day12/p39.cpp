/*
Internship activity - <Day 12>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

create a c++ program using class find customer and product details using Nested classes in c++ 

*/
Customer.h:

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    int customerId;
    string customerName;
    string gst;
    string contactNumber;
    string cityName;

public:
    class Product {
    private:
        string productCode;
        string productName;
        double productCost;
        double taxAmount;
        double totalAmount;

    public:
        Product();  
        void initialize();  
        void display() const;  
        friend class Customer; 
    };
    
    Customer();  
    void initialize();  
    void display() const;  
    void update();  
    void saveToLogFile(Product& product) const;  
};

#endif 


Customer.cpp

#include "Customer.h"

Customer::Product::Product() : productCode(""), productName(""), productCost(0.0), taxAmount(0.0), totalAmount(0.0) {}

void Customer::Product::initialize() {
    cout << "Enter Product Code: ";
    getline(cin, productCode);

    cout << "Enter Product Name: ";
    getline(cin, productName);

    cout << "Enter Product Cost: ";
    cin >> productCost;
    cin.ignore();

    taxAmount = productCost * 0.18;
    totalAmount = productCost + taxAmount;
}

void Customer::Product::display() const {
    cout << "Product Code: " << productCode << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Cost: " << productCost << endl;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "Total Amount (Including Tax): " << totalAmount << endl;
}

Customer::Customer() : customerId(0), customerName(""), gst(""), contactNumber(""), cityName("") {}

void Customer::initialize() {
    cout << "Enter Customer ID: ";
    cin >> customerId;
    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter GST: ";
    getline(cin, gst);

    cout << "Enter Contact Number: ";
    getline(cin, contactNumber);

    cout << "Enter City Name: ";
    getline(cin, cityName);
}

void Customer::display() const {
    cout << "\nCustomer Details:" << endl;
    cout << "Customer ID: " << customerId << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "GST: " << gst << endl;
    cout << "Contact Number: " << contactNumber << endl;
    cout << "City Name: " << cityName << endl;
}

void Customer::update() {
    string input;
    cout << "\nWould you like to update the contact? (Enter one of the following: Yes, No): ";
    cin >> input;

    if (input == "Yes" || input == "yes") {
        cout << "Enter new Contact Number: ";
        cin >> contactNumber;
    } else {
        cout << "No updates made." << endl;
    }
}

void Customer::saveToLogFile(Product& product) const {
    ofstream outFile("logfile.txt", ios::app);
    if (outFile.is_open()) {
        time_t now = time(0);
        char* dt = ctime(&now);

        outFile << "Customer ID: " << customerId << "\n";
        outFile << "Customer Name: " << customerName << "\n";
        outFile << "GST Number: " << gst << "\n";
        outFile << "Contact Number: " << contactNumber << "\n";
        outFile << "City Name: " << cityName << "\n";

        product.display();  

        outFile << "Billing Date/Time: " << dt;
        outFile << "------------------------------\n";

        outFile.close();
        cout << "Customer details saved to logfile.txt" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
}


main.cpp:
#include "Customer.h"

using namespace std;

int main() {
    Customer customer1;
    Customer::Product product1; 
    customer1.initialize();
    product1.initialize();

    customer1.display();
    product1.display();

    customer1.update();

    customer1.saveToLogFile(product1);

    return 0;
}


Output:

Enter Customer ID: 101
Enter Customer Name: linga
Enter GST: 234
Enter Contact Number: 67451278
Enter City Name: tvl
Enter Product Code: p205
Enter Product Name: watch 
Enter Product Cost: 500

Customer Details:
Customer ID: 101
Customer Name: linga
GST: 234
Contact Number: 67451278
City Name: tvl
Product Code: p205
Product Name: watch
Product Cost: 500
Tax Amount: 90
Total Amount (Including Tax): 590

Would you like to update the contact? (Enter one of the following: Yes, No): yes
Enter new Contact Number: 98374639276
Product Code: p205
Product Name: watch
Product Cost: 500
Tax Amount: 90
Total Amount (Including Tax): 590
Customer details saved to logfile.txt


logfile.txt:

Customer ID: 101
Customer Name: linga
GST Number: 234
Contact Number: 98374639276
City Name: tvl
Product Code: p205
Product Name: watch
Product Cost: 500
Tax Amount: 90
Total Amount (Including Tax): 590
Billing Date/Time: Fri Dec  6 05:43:08 2024
------------------------------



/*Internship activity - <Day 11>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 
create a c++ program using class find customer and product details using aggregation methods in c++.
*/

ProductCustomer.h

#ifndef PRODUCTCUSTOMER_H
#define PRODUCTCUSTOMER_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

class Product {
protected:
    int productCode;
    string name;
    double cost;
    double tax;

public:
    Product(int code = 0, string productName = "", double productCost = 0.0, double productTax = 0.0);
    void initializeProduct(int code, string productName, double productCost, double productTax);
    double billing(int quantity);
    void saveProductToLogFile(int quantity);
    int getProductCode() const { return productCode; }
    string getProductName() const { return name; }
    double getProductCost() const { return cost; }
    double getTaxPercentage() const { return tax; }
};

class Customer {
private:
    int customerId;
    string customerName;
    string gst;
    string contactNumber;
    string cityName;
    double totalAmount;

    Product* product;  
public:
    Customer(int productCode = 0, string productName = "", double productCost = 0.0, double productTax = 0.0);

    void initializeCustomer(int customerId, string customerName, string gst, string contactNumber, string cityName, Product* p);
    void displayCustomer();
    void saveCustomerToLogFile();
    void updateContact(string newContact);
    void setProduct(Product* p); 
};

#endif


main.cpp
#include "ProductCustomer.h"

Product::Product(int code, string productName, double productCost, double productTax) {
    productCode = code;
    name = productName;
    cost = productCost;
    tax = productTax;
}

void Product::initializeProduct(int code, string productName, double productCost, double productTax) {
    this->productCode = code;
    this->name = productName;
    this->cost = productCost;
    this->tax = productTax;
}

double Product::billing(int quantity) {
    double totalCost = cost * quantity;
    double totalTax = (tax / 100) * totalCost;
    return totalCost + totalTax;
}

void Product::saveProductToLogFile(int quantity) {
    double totalAmount = billing(quantity);
    ofstream logFile("products.log", ios::app);
    if (logFile.is_open()) {
        logFile << "Product Code: " << productCode << "\n";
        logFile << "Product Name: " << name << "\n";
        logFile << "Quantity: " << quantity << "\n";
        logFile << "Total Amount: " << totalAmount << "\n";
        logFile << "------------------------------\n";
        logFile.close();
        cout << "Product details saved to products.log\n";
    } else {
        cout << "Error opening log file.\n";
    }
}

Customer::Customer(int productCode, string productName, double productCost, double productTax)
    : customerId(0), customerName(""), gst(""), contactNumber(""), cityName(""), totalAmount(0.0), product(nullptr) {
    product = new Product(productCode, productName, productCost, productTax);
}


void Customer::initializeCustomer(int customerId, string customerName, string gst, string contactNumber, string cityName, Product* p) {
    this->customerId = customerId;
    this->customerName = customerName;
    this->gst = gst;
    this->contactNumber = contactNumber;
    this->cityName = cityName;

    product = p;  
    int quantity;
    cout << "Enter Quantity for the product: ";
    cin >> quantity;
    totalAmount = product->billing(quantity); 

void Customer::displayCustomer() {
    cout << "\nCustomer Details:\n";
    cout << "Customer ID: " << customerId << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "GST: " << gst << endl;
    cout << "Contact Number: " << contactNumber << endl;
    cout << "City Name: " << cityName << endl;

    cout << "\nProduct Details:\n";
    cout << "Product Code: " << product->getProductCode() << endl;
    cout << "Product Name: " << product->getProductName() << endl;
    cout << "Product Cost: " << product->getProductCost() << endl;
    cout << "Tax Percentage: " << product->getTaxPercentage() << "%" << endl;
    cout << "Total Amount (Including Tax): " << totalAmount << endl;
}
void Customer::saveCustomerToLogFile() {
    ofstream outFile("logfile.txt", ios::app);
    if (outFile.is_open()) {
        time_t now = time(0);
        char* dt = ctime(&now);

        outFile << "Customer ID: " << customerId << "\n";
        outFile << "Customer Name: " << customerName << "\n";
        outFile << "GST Number: " << gst << "\n";
        outFile << "Contact Number: " << contactNumber << "\n";
        outFile << "City Name: " << cityName << "\n";

        outFile << "Product Code: " << product->getProductCode() << "\n";
        outFile << "Product Name: " << product->getProductName() << "\n";
        outFile << "Product Cost: " << product->getProductCost() << "\n";
        outFile << "Tax Percentage: " << product->getTaxPercentage() << "%\n";
        outFile << "Total Amount (Including Tax): " << totalAmount << "\n";
        outFile << "Billing Date/Time: " << dt;
        outFile << "------------------------------\n";

        outFile.close();
        cout << "Customer details saved to logfile.txt\n";
    } else {
        cout << "Error opening log file.\n";
    }
}

void Customer::updateContact(string newContact) {
    this->contactNumber = newContact;
    cout << "Contact updated to: " << this->contactNumber << endl;
}

void Customer::setProduct(Product* p) {
    this->product = p;
}

int main() {
    int productCode;
    string productName;
    double productCost, productTax;

    cout << "Enter Product Code: ";
    cin >> productCode;
    cout << "Enter Product Name: ";
    getline(cin, productName); 
    cout << "Enter Product Cost: ";
    cin >> productCost;
    cout << "Enter Product Tax Percentage: ";
    cin >> productTax;

    Product* p = new Product(productCode, productName, productCost, productTax);

    int customerId;
    string customerName, gst, contactNumber, cityName;
    cout << "Enter Customer ID: ";
    cin >> customerId;
    cout << "Enter Customer Name: ";
    getline(cin, customerName);
    cout << "Enter GST Number: ";
    getline(cin, gst);
    cout << "Enter Contact Number: ";
    getline(cin, contactNumber);
    cout << "Enter City Name: ";
    getline(cin, cityName);
    Customer customer1(productCode, productName, productCost, productTax);
    customer1.setProduct(p);
    customer1.initializeCustomer(customerId, customerName, gst, contactNumber, cityName, p);
    customer1.displayCustomer();
    string newContact;
    cout << "Enter new contact number: ";
    getline(cin, newContact);
    customer1.updateContact(newContact);
    customer1.saveCustomerToLogFile();
    int quantity;
    cout << "Enter quantity for billing: ";
    cin >> quantity;
    p->saveProductToLogFile(quantity);

    return 0;
}

Output:
Enter Product Code: 101
Enter Product Name: prodc
Enter Product Cost: 500
Enter Product Tax Percentage: 1
Enter Customer ID: 101
Enter Customer Name: subbu
Enter GST Number: 123569
Enter Contact Number: 4578692315
Enter City Name: kovilpattti
Enter Quantity for the product: 2

Customer Details:
Customer ID: 101
Customer Name: subbu
GST: 123569
Contact Number: 4578692315
City Name: kovilpattti

Product Details:
Product Code: 101
Product Name: prodc
Product Cost: 500
Tax Percentage: 1%
Total Amount (Including Tax): 1010
Enter new contact number: Contact updated to: 
Customer details saved to logfile.txt
Enter quantity for billing: 2
Product details saved to products.log

products.log
Customer ID: 101
Customer Name: subbu
GST Number: 123569
Contact Number: 
City Name: kovilpattti
Product Code: 101
Product Name: prodc
Product Cost: 500
Tax Percentage: 1%
Total Amount (Including Tax): 1010
Billing Date/Time: Thu Dec  5 06:18:19 2024
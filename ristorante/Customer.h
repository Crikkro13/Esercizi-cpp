//
// Created by crist on 26/08/2024.
//

#ifndef RESTAURANT_CUSTOMER_H
#define RESTAURANT_CUSTOMER_H

#include <string>
#include <iostream>

using namespace std;
class Customer {
public:
    Customer(const string name, int cellNumber) : Name(name), CellNumber(cellNumber) {}

    const string getCustomerName() const {
        return Name;
    }

    void setName(const string &name) {
        Name = name;
    }

    int getCustomerCellNumber() const {
        return CellNumber;
    }

    void setCustomerCellNumber(int cellNumber) {
        CellNumber = cellNumber;
    }

private:
    string Name;
    int CellNumber;
};

#endif //RESTAURANT_CUSTOMER_H

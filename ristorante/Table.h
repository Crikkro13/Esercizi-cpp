//
// Created by crist on 26/08/2024.
//

#ifndef RESTAURANT_TABLE_H
#define RESTAURANT_TABLE_H

#include <string>
#include <iostream>

using namespace std;
class Table {
public:
    Table(int tableNumber, bool isFree) : TableNumber(tableNumber), isFree(isFree) {}

    int getTableNumber() const {
        return TableNumber;
    }

    void setTableNumber(int tableNumber) {
        TableNumber = tableNumber;
    }

    bool isTableFree() const {
        return isFree;
    }

    void setIsTableFree(bool isFree) {
        Table::isFree = isFree;
    }

private:
    int TableNumber;
    bool isFree;
};

#endif //RESTAURANT_TABLE_H

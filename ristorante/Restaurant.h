//
// Created by crist on 26/08/2024.
//

#ifndef RESTAURANT_RESTAURANT_H
#define RESTAURANT_RESTAURANT_H

#include <string>
#include <iostream>
#include <list>
#include "Table.h"

using namespace std;
class Restaurant {
public:
    Restaurant(const string name, const string address) : Name(name), Address(address) {}

    const string getRestaurantName() const {
        return Name;
    }

    void setRestaurantName(const string name) {
        Name = name;
    }

    const string getRestaurantAddress() const {
        return Address;
    }

    void setRestaurantAddress(const string address) {
        Address = address;
    }

private:
    string Name, Address;
    list<Table*> tables;
};

#endif //RESTAURANT_RESTAURANT_H

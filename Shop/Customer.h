//
// Created by crist on 05/09/2024.
//

#ifndef ES6_CUSTOMER_H
#define ES6_CUSTOMER_H
#include <string>
#include <list>
#include "Order.h"

using namespace std;
class Customer {
public:
    explicit Customer(string name) : CustomerName(name) {}

    void addOrder(Order* order);

    void removeOrder(Order* order);

    void printOrders() const;

    float getTotalPrice() const;

    ~Customer();

private:
    string CustomerName;
    list<Order*> OrderList;
};


#endif //ES6_CUSTOMER_H

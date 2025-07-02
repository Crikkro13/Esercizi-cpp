//
// Created by crist on 05/09/2024.
//

#ifndef ES6_ORDER_H
#define ES6_ORDER_H

#include "OrderItem.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;
class Order {
public:
    void addOrder(OrderItem* orderItem);

    void removeOrder(OrderItem* orderItem);

    float getOrderPrice() const;

    void printOrderList() const;

    virtual ~Order();

private:
    list<OrderItem*> OrderList;
};

#endif //ES6_ORDER_H

//
// Created by crist on 05/09/2024.
//
#include "Order.h"

void Order::addOrder(OrderItem* orderItem) {
    OrderList.push_back(orderItem);
}

void Order::removeOrder(OrderItem* orderItem){
    OrderList.remove(orderItem);
}

float Order::getOrderPrice() const {
    float OrderPrice = 0;
    for(auto it=OrderList.begin(); it!=OrderList.end(); ++it) {
        OrderPrice += (*it)->getOrderItemPrice();
    }
    cout << "Prezzo dell'ordine: " << OrderPrice << endl;
    return OrderPrice;
}

void Order::printOrderList() const {
    cout << "Stampa dell'ordine:" << endl;
    for(auto it=OrderList.begin(); it!=OrderList.end(); ++it) {
        (*it)->printOrder();
    }
}

Order::~Order() {
    for(auto it=OrderList.begin(); it!=OrderList.end(); ++it){
        delete[] (*it);
    }
}

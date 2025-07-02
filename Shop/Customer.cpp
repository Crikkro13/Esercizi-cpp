//
// Created by crist on 05/09/2024.
//
#include "Customer.h"

void Customer::addOrder(Order* order) {
    OrderList.push_back(order);
}

void Customer::removeOrder(Order* order) {
    OrderList.remove(order);
}

void Customer::printOrders() const {
    cout << "Stampa degli ordini di " << CustomerName << endl;
    for (auto it = OrderList.begin(); it!=OrderList.end(); ++it) {
        (*it)->printOrderList();
    }
}

float Customer::getTotalPrice() const {
    float OrderPrice = 0;
    for(auto it=OrderList.begin(); it!=OrderList.end(); ++it) {
        OrderPrice += (*it)->getOrderPrice();
    }
    cout << "Prezzo dell'ordine di " << CustomerName << ": " << OrderPrice << endl;
    return OrderPrice;
}

Customer::~Customer() {
    for(auto it=OrderList.begin(); it!=OrderList.end(); ++it){
        delete[] (*it);
    }
}

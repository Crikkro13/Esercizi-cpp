//
// Created by crist on 05/09/2024.
//
#include "OrderItem.h"

void OrderItem::addOrderItem(Product* product, int qty) {
    ItemOrder.insert(make_pair(product,qty));
}

void OrderItem::removeOrderItem(Product* product) {
    ItemOrder.erase(product);
}

float OrderItem::getOrderItemPrice() const {
    float orderItemPrice=0;
    for(auto it=ItemOrder.begin(); it!=ItemOrder.end(); ++it) {
        orderItemPrice += (*it).first->getPrice() * (*it).second;
    }
    return orderItemPrice;
}

void OrderItem::printOrder() const {
    for(auto it=ItemOrder.begin(); it!=ItemOrder.end(); ++it) {
        cout << "    " << it->first->getName() << " x " << it->second << endl;
    }
}

OrderItem::~OrderItem() {
    for (auto& pair : ItemOrder) {
        delete pair.first;
    }
}

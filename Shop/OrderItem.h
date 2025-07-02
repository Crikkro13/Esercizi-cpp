//
// Created by crist on 05/09/2024.
//

#ifndef ES6_ORDERITEM_H
#define ES6_ORDERITEM_H

#include <map>
#include "Product.h"

class OrderItem {
public:
    OrderItem() {}

    OrderItem(Product* p, int qty){
        addOrderItem(p,qty);
    }

    void addOrderItem(Product* product, int qty);

    void removeOrderItem(Product* product);

    float getOrderItemPrice() const;

    void printOrder() const;

    virtual ~OrderItem();

private:
    map<Product*,int> ItemOrder;
};

#endif //ES6_ORDERITEM_H

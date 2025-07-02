//
// Created by crist on 05/09/2024.
//

#ifndef ES6_PRODUCT_H
#define ES6_PRODUCT_H
#include <iostream>

using namespace std;
class Product {
public:
    Product(float price, string name) : Price(price), Name(name) {}

    float getPrice() const {
        return Price;
    }

    void setPrice(float price) {
        Price = price;
    }

    const string &getName() const {
        return Name;
    }

    void setName(const string &name) {
        Name = name;
    }

private:
    float Price;
    string Name;
};

#endif //ES6_PRODUCT_H

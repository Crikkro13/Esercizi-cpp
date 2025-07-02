#include <iostream>
#include "string"

using namespace std;

class Product {
protected:
    int price;
    string name;
public:
    Product(string n, int p) : name(n), price(p) {}

    virtual void calculateprice() = 0;

    virtual int getPrice()=0;
};

class Electronics : public Product {
public:
    Electronics(string n, int p) : Product(n,p) {}

    virtual void calculateprice() override {
        price = price*1.2;
        cout << "Prezzo dell'elettronico " << name << " : " << price << endl;
    }

    virtual int getPrice() override {
        return price;
    }
};

class Clothing : public Product {
public:
    Clothing(string n, int p) : Product(n,p) {}

    virtual void calculateprice() override {
        price = price*0.9;
        cout << "Prezzo dell'abbigliamento " << name << " : " << price << endl;
    }

    virtual int getPrice() override {
        return price;
    }
};

class Food : public Product {
public:
    Food(string n, int p) : Product(n,p) {}

    virtual void calculateprice() override {
        price = price+5;
        cout << "Prezzo del cibo " << name << " : " << price << endl;
    }

    virtual int getPrice() override {
        return price;
    }
};

class ProductFactory {
public:
    static Product* createproduct(string type, string name, int price) {
        if (type == "Electronics")
            return new Electronics(name,price);
        else if (type == "Clothing")
            return new Clothing(name,price);
        else if (type == "Food")
            return new Food(name,price);
        else
            return nullptr;
    }
};

int main() {
    ProductFactory productFactory;
    auto p1 = productFactory.createproduct("Electronics","Iphone",100);
    auto p2 = productFactory.createproduct("Food","Banana",5);
    p1->calculateprice();
    p2->calculateprice();
}

#include <iostream>
#include "Order.h"
#include "Customer.h"

int main() {
    Customer* Mario = new Customer("Mario");
    Product* p1 = new Product(1,"Banana");
    Product* p2 = new Product(2.5,"Cipolle");
    Product* p3 = new Product(0.2,"Goleador");
    Product* p4 = new Product(10,"Salmone");
    OrderItem* o1 = new OrderItem(p1,5);
    OrderItem* o2 = new OrderItem(p4,1);
    OrderItem* o3 = new OrderItem(p2,3);
    OrderItem* o4 = new OrderItem(p3,10);
    Order* oo = new Order;
    Order* oo2 = new Order;
    oo->addOrder(o1);
    oo->addOrder(o2);
    oo2->addOrder(o3);
    oo2->addOrder(o4);
    oo->printOrderList();
    oo->getOrderPrice();
    Mario->addOrder(oo);
    Mario->addOrder(oo2);
    o4->removeOrderItem(p3);
    Mario->printOrders();
    Mario->getTotalPrice();
}

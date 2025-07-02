//
// Created by crist on 16/12/2024.
//

#ifndef ESERC4_AUTOMOBILE_H
#define ESERC4_AUTOMOBILE_H

#include "Vehicle.h"

class Automobile : public Vehicle {
public:
    Automobile(string ta, int po);

    void printSpecifiche() const override;

    int costoNoleggio() const override;

    virtual ~Automobile();
};

#endif //ESERC4_AUTOMOBILE_H

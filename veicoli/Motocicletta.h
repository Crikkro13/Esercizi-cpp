//
// Created by crist on 16/12/2024.
//

#ifndef ESERC4_MOTOCICLETTA_H
#define ESERC4_MOTOCICLETTA_H

#include "Vehicle.h"

class Motocicletta : public Vehicle {
public:
    Motocicletta(string ta, int po);

    void printSpecifiche() const override;

    int costoNoleggio() const override;

    virtual ~Motocicletta();
};

#endif //ESERC4_MOTOCICLETTA_H

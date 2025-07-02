//
// Created by crist on 16/12/2024.
//

#ifndef ESERC4_FURGONE_H
#define ESERC4_FURGONE_H

#include "Vehicle.h"

class Furgone : public Vehicle {
private:
    int capacità;
public:
    Furgone(string ta, int po, int ca);

    void printSpecifiche() const override;

    int costoNoleggio() const override;

    virtual ~Furgone();
};

#endif //ESERC4_FURGONE_H

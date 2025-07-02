//
// Created by crist on 16/12/2024.
//

#ifndef ESERC4_VEHICLE_H
#define ESERC4_VEHICLE_H

#include "iostream"

using namespace std;

class Vehicle {
protected:
    string targa;
    int posti;

    Vehicle(string& ta, int po) : targa(ta), posti(po) {}

public:
    virtual void printSpecifiche() const = 0;

    virtual int costoNoleggio() const = 0;

    const string &getTarga() const {
        return targa;
    }
};

#endif //ESERC4_VEHICLE_H

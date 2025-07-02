//
// Created by crist on 16/12/2024.
//
#include "Automobile.h"

Automobile::Automobile(std::string ta, int po) : Vehicle(ta,po) {}

void Automobile::printSpecifiche() const {
    cout << "Macchina di targa " << targa << " e posti " << posti << endl;
}

int Automobile::costoNoleggio() const {
    return 30+5*posti;
}

Automobile::~Automobile() {}
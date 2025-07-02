//
// Created by crist on 16/12/2024.
//
#include "Furgone.h"

Furgone::Furgone(std::string ta, int po, int ca) : Vehicle(ta,po), capacità(ca) {}

void Furgone::printSpecifiche() const {
    cout << "Furgone di targa " << targa << ", posti " << posti << " e capacità " << capacità << endl;
}

int Furgone::costoNoleggio() const {
    return 50+2*capacità;
}

Furgone::~Furgone() {}

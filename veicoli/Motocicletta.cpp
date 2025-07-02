//
// Created by crist on 16/12/2024.
//
#include "Motocicletta.h"

Motocicletta::Motocicletta(std::string ta, int po) : Vehicle(ta,po) {}

void Motocicletta::printSpecifiche() const {
    cout << "Moto di targa " << targa << " e posti " << posti << endl;
}

int Motocicletta::costoNoleggio() const {
    return 40;
}

Motocicletta::~Motocicletta() {}

//
// Created by crist on 16/12/2024.
//
#include "Credenziali.h"

Credenziali::Credenziali(string na, string pw, string da) : username(na), password(pw), ultimaModifica(da) {}

void Credenziali::changeUsername(string name) {
    username = name;
}

void Credenziali::changePassword(string pw, string data) {
    password = pw;
    ultimaModifica = data;
}

const string &Credenziali::getUsername() const {
    return username;
}

const string &Credenziali::getPassword() const {
    return password;
}

const string &Credenziali::getUltimaModifica() const {
    return ultimaModifica;
}

Credenziali::~Credenziali() {}


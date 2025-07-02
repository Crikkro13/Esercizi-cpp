//
// Created by crist on 16/12/2024.
//

#ifndef ESER5_GESTORECREDENZIALI_H
#define ESER5_GESTORECREDENZIALI_H

#include "Credenziali.h"
#include "map"
#include "iostream"

using namespace std;

class GestoreCredenziali {
private:
    map<string,Credenziali> gestore;
public:
    void addCredenziali(string URL, Credenziali cred);

    void removeCredenziali(string URL);

    void searchCredenziali(string URL);

    void changePassword(string URL, string data);

    virtual ~GestoreCredenziali();
};

#endif //ESER5_GESTORECREDENZIALI_H

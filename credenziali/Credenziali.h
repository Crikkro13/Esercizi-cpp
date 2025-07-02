//
// Created by crist on 16/12/2024.
//

#ifndef ESER5_CREDENZIALI_H
#define ESER5_CREDENZIALI_H
#include "string"

using namespace std;

class Credenziali {
private:
    string username, password, ultimaModifica;

    friend class GestoreCredenziali;

    void changeUsername(string name);

    void changePassword(string pw, string data);

public:
    const string &getUsername() const;

    const string &getPassword() const;

    const string &getUltimaModifica() const;

public:
    Credenziali(string na, string pw, string da);

    virtual ~Credenziali();
};

#endif //ESER5_CREDENZIALI_H

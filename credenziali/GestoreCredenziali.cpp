//
// Created by crist on 16/12/2024.
//
#include "GestoreCredenziali.h"

void GestoreCredenziali::addCredenziali(std::string URL, Credenziali cred) {
    bool found = false;
    for (auto it = gestore.begin(); it != gestore.end() && found == false; ++it) {
        if (it->second.getPassword() == cred.getPassword()) {
            found = true;
            std::cout << "La password è già usata da un altro URL!" << std::endl;
        }
    }

    if (!found) {
        gestore.insert(std::make_pair(URL, cred));
        std::cout << "Credenziali aggiunte per URL: " << URL << std::endl;
    }
}

void GestoreCredenziali::removeCredenziali(std::string URL) {
    gestore.erase(URL);
}

void GestoreCredenziali::searchCredenziali(std::string URL) {
    auto it = gestore.find(URL);
    if (it != gestore.end()){
        cout << "Credenziali relative all'URL " << URL << ": UserName: " << it->second.getUsername() << ", Password: " << it->second.getPassword() << ", Ultima Modifica: " << it->second.getUltimaModifica() << endl;
    }
}

void GestoreCredenziali::changePassword(std::string URL, std::string data) {
    auto it = gestore.find(URL);
    if (it != gestore.end()) {
        string newPW;
        cout << "Inserire una nuova password: " << endl;
        cin >> newPW;
        if (newPW != it->second.getPassword())
            it->second.changePassword(newPW,data);
        else
            cout << "La password è uguale a quella vecchia!" << endl;
    }
}

GestoreCredenziali::~GestoreCredenziali() {}

#include <iostream>
#include "Credenziali.h"
#include "GestoreCredenziali.h"

int main() {
    Credenziali credenziali1("Pippo", "1234", "16/12/24");
    Credenziali credenziali2("Pluto", "0000", "16/12/24");
    Credenziali credenziali3("Topolino", "9876", "16/12/24");

    GestoreCredenziali gestoreCredenziali;
    gestoreCredenziali.addCredenziali("Gianni.com",credenziali1);
    gestoreCredenziali.addCredenziali("Amazon.com",credenziali2);
    gestoreCredenziali.addCredenziali("Unifi.it",credenziali2);

    gestoreCredenziali.searchCredenziali("Gianni.com");
    gestoreCredenziali.removeCredenziali("Gianni.com");
    gestoreCredenziali.searchCredenziali("Gianni.com");

    gestoreCredenziali.changePassword("Unifi.it","16/12/2024");
    gestoreCredenziali.changePassword("Unifi.it","16/12/2024");
}

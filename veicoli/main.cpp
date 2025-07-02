#include <iostream>
#include "Motocicletta.h"
#include "Automobile.h"
#include "Furgone.h"
#include "vector"
#include "algorithm"

int calcTotalAmount(std::vector<Vehicle*> noleggi) {
    int totale = 0;
    for (auto it : noleggi)
        totale += it->costoNoleggio();
    cout << "La spesa totale è " << totale << " euro" << endl;
    return totale;
}

int main() {
    vector<Vehicle*> noleggioGiornaliero;

    auto v1 = new Automobile("FG356QD",4);
    auto v2 = new Motocicletta("HJ789L",2);
    auto v3 = new Furgone("AB638PL",6,10);

    noleggioGiornaliero.push_back(v1);
    noleggioGiornaliero.push_back(v2);
    noleggioGiornaliero.push_back(v3);

    calcTotalAmount(noleggioGiornaliero);
}

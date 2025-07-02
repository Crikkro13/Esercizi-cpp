//
// Created by crist on 26/08/2024.
//

#ifndef RESTAURANT_RESERVATIONSYSTEM_H
#define RESTAURANT_RESERVATIONSYSTEM_H

#include "Reservation.h"
#include <map>

class ReservationSystem {
public:
    void addReservation(Reservation* reservation, Restaurant* restaurant) {
        if (reservation->isTabFree()){
            ReservationList.insert(make_pair(reservation,restaurant));
            reservation->setIsTableFree1(false);
        }
        else
            cout << "Il tavolo selezionato è già prenotato" << endl;
    }

    void printReservations(Restaurant* restaurant) {
        cout << "Prenotazioni del ristorante " << restaurant->getRestaurantName() << ": " << endl;
        for (auto it = ReservationList.begin(); it != ReservationList.end(); ++it){
            if((*it).second == restaurant)
                cout << "Prenotazione a nome " << (*it).first->getCustomer() << " per il tavolo " << (*it).first->getTable() << " per " << (*it).first->getNumCustomers() << " persone, il " << (*it).first->getDay() << "/" << (*it).first->getMonth() << "/" << (*it).first->getYear() << " , " << (*it).first->getHour() << ":" << (*it).first->getMinute() << endl;
        }
    }

private:
    map<Reservation*, Restaurant*> ReservationList;
};

#endif //RESTAURANT_RESERVATIONSYSTEM_H

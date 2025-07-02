#include <iostream>
#include "Customer.h"
#include "Restaurant.h"
#include "Reservation.h"
#include "ReservationSystem.h"
#include "Table.h"

int main() {
    Customer* Laterza = new Customer("Iacopo", 3395309465);
    ReservationSystem Gianni;
    Restaurant* FrittoMisto = new Restaurant("Gabibbo","Via Roma 14");
    Table* Tavolo = new Table(1,true);
    Reservation* boh = new Reservation(Laterza,Tavolo,26,8,24,20,30,3);
    Gianni.addReservation(boh,FrittoMisto);
    Gianni.printReservations(FrittoMisto);
    Customer* Marco = new Customer("Marco",3932848471);
    Table* Tavolazzo = new Table(4,true);
    Restaurant* DaMario = new Restaurant("Tana dello Svago","Via Napoli 8");
    Reservation* mah = new Reservation(Marco,Tavolazzo,26,8,24,17,30,1);
    Gianni.addReservation(mah,DaMario);
    Gianni.printReservations(DaMario);
    Customer* Marcovaldo = new Customer("Marcovaldo",3932848471);
    Table* Tavolino = new Table(3,true);
    Reservation* meh = new Reservation(Marcovaldo,Tavolino,26,8,24,17,30,1);
    Gianni.addReservation(meh,DaMario);
    Gianni.printReservations(DaMario);
}

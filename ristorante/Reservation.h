//
// Created by crist on 26/08/2024.
//

#ifndef RESTAURANT_RESERVATION_H
#define RESTAURANT_RESERVATION_H

#include "Customer.h"
#include "Restaurant.h"
#include "Table.h"

class Reservation {
public:
    Reservation(Customer *customer, Table *table, int day, int month, int year, int hour, int minute, int numCustomers)
            : customer(customer), table(table), Day(day), Month(month), Year(year), Hour(hour), Minute(minute),
              numCustomers(numCustomers) {}

    const basic_string<char> getCustomer() const {
        return customer->getCustomerName();
    }

    int getTable() const {
        return table->getTableNumber();
    }

    int getDay() const {
        return Day;
    }

    int getMonth() const {
        return Month;
    }

    int getYear() const {
        return Year;
    }

    int getHour() const {
        return Hour;
    }

    int getMinute() const {
        return Minute;
    }

    int getNumCustomers() const {
        return numCustomers;
    }

    bool isTabFree() {
        if (table->isTableFree())
            return true;
        else
            return false;
    }

    void setIsTableFree1(bool isFree) {
        table->setIsTableFree(false);
    }

private:
    Customer* customer;
    Table* table;
    int Day, Month, Year, Hour, Minute, numCustomers;
};

#endif //RESTAURANT_RESERVATION_H

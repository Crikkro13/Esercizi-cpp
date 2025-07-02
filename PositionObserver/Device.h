//
// Created by crist on 16/12/2024.
//

#ifndef ESERC6_DEVICE_H
#define ESERC6_DEVICE_H

#include "Subject.h"
#include "list"

class Device : public Subject {
private:
    list<Observer*> observerList;
    string name, identifier;
    double latitudine, longitudine;
public:
    Device(const string &name, const string &identifier, double latitudine, double longitudine);

    void subscribe(Observer* o) override;

    void unsubscribe(Observer* o) override;

    void notify() override;

    void setPosition(double lat, double lon);

    virtual ~Device();
};

#endif //ESERC6_DEVICE_H

//
// Created by crist on 16/12/2024.
//
#include "Device.h"

Device::Device(const string &name, const string &identifier, double latitudine, double longitudine) : name(name), identifier(identifier), latitudine(latitudine), longitudine(longitudine) {}

void Device::subscribe(Observer *o) {
    observerList.push_back(o);
}

void Device::unsubscribe(Observer *o) {
    observerList.remove(o);
}

void Device::notify() {
    for (auto it : observerList)
        it->update(latitudine,longitudine,name);
}

void Device::setPosition(double lat, double lon) {
    latitudine = lat;
    longitudine = lon;
    notify();
}

Device::~Device() {
    for (auto it : observerList)
        delete it;
}

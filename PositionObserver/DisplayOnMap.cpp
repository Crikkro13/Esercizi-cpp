//
// Created by crist on 16/12/2024.
//
#include "DisplayOnMap.h"

void DisplayOnMap::attach(Subject *s) {
    s->subscribe(this);
}

void DisplayOnMap::detach(Subject *s) {
    s->unsubscribe(this);
}

void DisplayOnMap::update(double lat, double lon, string name) {
    cout << "Mostrando sulla mappa il dispositivo " << name << "..." << endl;
}

DisplayOnMap::~DisplayOnMap() {}

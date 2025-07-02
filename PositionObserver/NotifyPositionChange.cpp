//
// Created by crist on 16/12/2024.
//
#include "NotifyPositionChange.h"

void NotifyPositionChange::attach(Subject *s) {
    s->subscribe(this);
}

void NotifyPositionChange::detach(Subject *s) {
    s->unsubscribe(this);
}

void NotifyPositionChange::update(double lat, double lon, string name) {
    cout << "Il dispositivo " << name << " ha una nuova posizione: Latitudine " << lat << ", Longitudine: " << lon << endl;
}

NotifyPositionChange::~NotifyPositionChange() {}

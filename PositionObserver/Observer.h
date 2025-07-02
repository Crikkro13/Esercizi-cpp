//
// Created by crist on 16/12/2024.
//

#ifndef ESERC6_OBSERVER_H
#define ESERC6_OBSERVER_H

#include "iostream"
#include "string"

using namespace std;

class Subject;

class Observer {
public:
    virtual void attach(Subject* s) = 0;

    virtual void detach(Subject* s) = 0;

    virtual void update(double lat, double lon, string name) = 0;

    virtual ~Observer() {}
};

#endif //ESERC6_OBSERVER_H

//
// Created by crist on 16/12/2024.
//

#ifndef ESERC6_SUBJECT_H
#define ESERC6_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void subscribe(Observer* o) = 0;

    virtual void unsubscribe(Observer* o) = 0;

    virtual void notify() = 0;

    virtual ~Subject() {}
};

#endif //ESERC6_SUBJECT_H

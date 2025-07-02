//
// Created by crist on 16/12/2024.
//

#ifndef ESERC6_NOTIFYPOSITIONCHANGE_H
#define ESERC6_NOTIFYPOSITIONCHANGE_H

#include "Observer.h"
#include "Subject.h"

class NotifyPositionChange : public Observer {
public:
    void attach(Subject* s) override;

    void detach(Subject* s) override;

    void update(double lat, double lon, string name) override;

    virtual ~NotifyPositionChange();
};

#endif //ESERC6_NOTIFYPOSITIONCHANGE_H

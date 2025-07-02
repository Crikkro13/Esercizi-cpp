//
// Created by crist on 16/12/2024.
//

#ifndef ESERC6_DISPLAYONMAP_H
#define ESERC6_DISPLAYONMAP_H

#include "Observer.h"
#include "Subject.h"

class DisplayOnMap : public Observer {
public:
    void attach(Subject* s) override;

    void detach(Subject* s) override;

    void update(double lat, double lon, string name) override;

    virtual ~DisplayOnMap();
};

#endif //ESERC6_DISPLAYONMAP_H

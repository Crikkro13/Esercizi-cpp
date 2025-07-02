//
// Created by crist on 01/09/2024.
//

#ifndef ADAPTER_ADVANCEDMEDIAPLAYER_H
#define ADAPTER_ADVANCEDMEDIAPLAYER_H

#include <iostream>

using namespace std;

class AdvancedMediaPlayer {
public:
    virtual void videoplay(string videoType, bool checkDRM) = 0;
};

#endif //ADAPTER_ADVANCEDMEDIAPLAYER_H

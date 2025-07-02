//
// Created by crist on 01/09/2024.
//

#ifndef ADAPTER_MEDIAPLAYER_H
#define ADAPTER_MEDIAPLAYER_H

#include <iostream>

using namespace std;

class MediaPlayer {
public:
    virtual void play(string audioType, string filename) = 0;
};

#endif //ADAPTER_MEDIAPLAYER_H

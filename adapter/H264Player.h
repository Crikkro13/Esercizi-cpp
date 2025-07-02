//
// Created by crist on 01/09/2024.
//

#ifndef ADAPTER_H264PLAYER_H
#define ADAPTER_H264PLAYER_H

#include "AdvancedMediaPlayer.h"

class H264Player : public AdvancedMediaPlayer {
public:
    void videoplay(string videoType, bool checkDRM) override {
        cout << "H264Player playing... " << endl;
    }
};

#endif //ADAPTER_H264PLAYER_H

//
// Created by crist on 01/09/2024.
//

#ifndef ADAPTER_WMVPLAYER_H
#define ADAPTER_WMVPLAYER_H

#include "AdvancedMediaPlayer.h"

class WMVPlayer : public AdvancedMediaPlayer {
public:
    void videoplay(string videoType, bool checkDRM) override {
        cout << "WMVPlayer playing... " << endl;
    }
};

#endif //ADAPTER_WMVPLAYER_H

//
// Created by crist on 01/09/2024.
//

#ifndef ADAPTER_ADAPTER_H
#define ADAPTER_ADAPTER_H

#include "MediaPlayer.h"
#include "WMVPlayer.h"
#include "H264Player.h"

class Adapter : public WMVPlayer, public H264Player, private MediaPlayer {
public:
    void play(string audioType, string filename) override {
        if (audioType == "wmv"){
            player = new WMVPlayer;
            player->videoplay(audioType,true);
        }
        else if (audioType == "h264") {
            player = new H264Player;
            player->videoplay(audioType,true);
        }
        else
            cout << "Unknown Audio Type: " << audioType << endl;
    }

private:
    AdvancedMediaPlayer* player;
};

#endif //ADAPTER_ADAPTER_H

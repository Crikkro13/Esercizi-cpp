//
// Created by crist on 01/09/2024.
//

#ifndef ADAPTER_VIDEOPLAYER_H
#define ADAPTER_VIDEOPLAYER_H

#include "MediaPlayer.h"
#include "Adapter.h"

class VideoPlayer : public MediaPlayer {
public:
    VideoPlayer() {
        adapter = new Adapter;
    }

    void play(string audioType, string filename) override {
        if(audioType != "avi")
            adapter->play(audioType,filename);
        else
            cout << "VideoPlayer playing AVI... " << endl;
    }
private:
    Adapter* adapter;
};

#endif //ADAPTER_VIDEOPLAYER_H

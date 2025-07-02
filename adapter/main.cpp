#include <iostream>
#include "WMVPlayer.h"
#include "H264Player.h"
#include "VideoPlayer.h"

int main() {
    VideoPlayer* vp = new VideoPlayer;
    vp->play("avi","test.avi");
    vp->play("h264","test.h264");
    vp->play("wmv","test.wmv");
}

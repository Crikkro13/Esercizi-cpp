cmake_minimum_required(VERSION 3.27)
project(adapter)

set(CMAKE_CXX_STANDARD 17)

add_executable(adapter main.cpp
        MediaPlayer.h
        AdvancedMediaPlayer.h
        WMVPlayer.h
        H264Player.h
        VideoPlayer.h
        Adapter.h)

cmake_minimum_required(VERSION 3.27)
project(eserc6)

set(CMAKE_CXX_STANDARD 17)

add_executable(eserc6 main.cpp
        Observer.h
        Subject.h
        Device.h
        Device.cpp
        NotifyPositionChange.h
        NotifyPositionChange.cpp
        DisplayOnMap.h
        DisplayOnMap.cpp)

cmake_minimum_required(VERSION 3.27)
project(eserc4)

set(CMAKE_CXX_STANDARD 17)

add_executable(eserc4 main.cpp
        Vehicle.h
        Automobile.h
        Automobile.cpp
        Motocicletta.h
        Motocicletta.cpp
        Furgone.h
        Furgone.cpp)

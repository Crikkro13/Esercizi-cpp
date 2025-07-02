cmake_minimum_required(VERSION 3.27)
project(es5)

set(CMAKE_CXX_STANDARD 11)

add_executable(es5 main.cpp
        Note.h
        Text.h
        Text.cpp
        Image.h
        Image.cpp
        Audio.h
        Audio.cpp
        BlockNote.h
        BlockNote.cpp)

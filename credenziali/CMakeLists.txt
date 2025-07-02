cmake_minimum_required(VERSION 3.27)
project(eser5)

set(CMAKE_CXX_STANDARD 17)

add_executable(eser5 main.cpp
        Credenziali.h
        Credenziali.cpp
        GestoreCredenziali.h
        GestoreCredenziali.cpp)

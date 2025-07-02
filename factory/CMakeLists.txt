cmake_minimum_required(VERSION 3.27)
project(factory)

set(CMAKE_CXX_STANDARD 17)

add_executable(factory main.cpp
        FileSystemObj.h
        File.h
        Directory.h
        LinuxFile.h
        LinuxDirectory.h
        WindowsFile.h
        WindowsDirectory.h
        AbstractFactory.h
        WindowsFactory.h
        LinuxFactory.h)

//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_WINDOWSFACTORY_H
#define FACTORY_WINDOWSFACTORY_H

#include "AbstractFactory.h"
#include "WindowsFile.h"
#include "WindowsDirectory.h"

class WindowsFactory : public AbstractFactory {
public:
    virtual File* createFile(string name) override {
        return new WindowsFile;
    }
    virtual Directory* createDirectory(string name){
        return new WindowsDirectory;
    }
};

#endif //FACTORY_WINDOWSFACTORY_H

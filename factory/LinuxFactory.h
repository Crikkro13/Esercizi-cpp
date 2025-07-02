//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_LINUXFACTORY_H
#define FACTORY_LINUXFACTORY_H

#include "AbstractFactory.h"
#include "LinuxDirectory.h"
#include "LinuxFile.h"

class LinuxFactory : public AbstractFactory {
    virtual File* createFile(string name) override {
        return new LinuxFile;
    }
    virtual Directory* createDirectory(string name){
        return new LinuxDirectory;
    }
};

#endif //FACTORY_LINUXFACTORY_H

//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_ABSTRACTFACTORY_H
#define FACTORY_ABSTRACTFACTORY_H

#include "File.h"
#include "Directory.h"

class AbstractFactory {
public:
    virtual File* createFile(string name) = 0;
    virtual Directory* createDirectory(string name) = 0;
};

#endif //FACTORY_ABSTRACTFACTORY_H

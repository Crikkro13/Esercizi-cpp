//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_FILE_H
#define FACTORY_FILE_H

#include "FileSystemObj.h"

class File : public FileSystemObj {
public:
    virtual bool isHidden() const = 0;
    int numBytes;
};

#endif //FACTORY_FILE_H

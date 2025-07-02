//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_DIRECTORY_H
#define FACTORY_DIRECTORY_H

#include "FileSystemObj.h"
#include "File.h"
#include <list>

class Directory : public FileSystemObj {
public:
    void addFile(File* newFile) {
        files.push_back(newFile);
    }

    virtual void removeFile(File* oldFile){
        files.remove(oldFile);
    }

    virtual void list()=0;

protected:
    std::list<File*> files;
};

#endif //FACTORY_DIRECTORY_H

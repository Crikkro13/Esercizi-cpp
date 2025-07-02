//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_FILESYSTEMOBJ_H
#define FACTORY_FILESYSTEMOBJ_H

#include <iostream>
using namespace std;

class FileSystemObj {
public:
    virtual bool create(string aName) = 0;
    virtual bool move(string newName) = 0;

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        FileSystemObj::name = name;
    }

private:
    string name;
};

#endif //FACTORY_FILESYSTEMOBJ_H

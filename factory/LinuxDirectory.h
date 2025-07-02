//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_LINUXDIRECTORY_H
#define FACTORY_LINUXDIRECTORY_H

#include "Directory.h"

class LinuxDirectory : public Directory {
public:
      void list() override {
        for (auto it = files.rbegin(); it != files.rend(); ++it) {
            cout << (*it)->getName() << endl;
        }
    }

    const string &getLinuxDirectoryName() const {
        return LinuxDirectoryName;
    }

    void setLinuxDirectoryName(const string &linuxDirectoryName) {
        LinuxDirectoryName = linuxDirectoryName;
    }

    bool move(string newName) override {
        if (newName != LinuxDirectoryName){
            setLinuxDirectoryName(newName);
            cout << "Nome cambiato" << endl;
            return true;
        }
        else{
            cout << "Nome non cambiato" << endl;
            return false;
        }
    }

    bool create(string aName) override {
        LinuxDirectoryName = aName;
        cout << "Creata Directory Linux " << LinuxDirectoryName << endl;
        return true;
    }

private:
    string LinuxDirectoryName;
};

#endif //FACTORY_LINUXDIRECTORY_H

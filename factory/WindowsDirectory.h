//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_WINDOWSDIRECTORY_H
#define FACTORY_WINDOWSDIRECTORY_H

#include "Directory.h"

class WindowsDirectory : public Directory {
public:

    void list() override {
        for (auto it = files.begin(); it != files.end(); ++it) {
            cout << (*it)->getName() << endl;
        }
    }

    const string &getWindowsDirectoryName() const {
        return WindowsDirectoryName;
    }

    void setWindowsDirectoryName(const string &windowsDirectoryName) {
        WindowsDirectoryName = windowsDirectoryName;
    }

    bool move(string newName) override {
        if (newName != WindowsDirectoryName){
            setWindowsDirectoryName(newName);
            cout << "Nome cambiato" << endl;
            return true;
        }
        else{
            cout << "Nome non cambiato" << endl;
            return false;
        }
    }

    bool create(string aName) override {
        WindowsDirectoryName = aName;
        cout << "Creata Directory Windows " << WindowsDirectoryName << endl;
        return true;
    }

private:
    string WindowsDirectoryName;
};

#endif //FACTORY_WINDOWSDIRECTORY_H

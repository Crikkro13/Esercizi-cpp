//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_WINDOWSFILE_H
#define FACTORY_WINDOWSFILE_H

#include "File.h"

class WindowsFile : public File {
public:
    bool isHidden() const override {
        if(Hidden)
            return true;
        else
            return false;
    }

    const string &getWFileName() const {
        return WFileName;
    }

    void setWFileName(const string &wFileName) {
        WFileName = wFileName;
    }

    void setHidden(bool hidden) {
        Hidden = hidden;
    }

    bool move(string newName) override {
        if (newName != WFileName){
            setWFileName(newName);
            cout << "Nome cambiato" << endl;
            return true;
        }
        else{
            cout << "Nome non cambiato" << endl;
            return false;
        }
    }

    bool create(string aName) override {
        WFileName = aName;
        Hidden = false;
        cout << "Creato File Windows " << WFileName << endl;
        return true;
    }

private:
    string WFileName;
    bool Hidden;
};

#endif //FACTORY_WINDOWSFILE_H

//
// Created by crist on 01/09/2024.
//

#ifndef FACTORY_LINUXFILE_H
#define FACTORY_LINUXFILE_H

#include "File.h"

class LinuxFile : public File {
public:
    const string getFileName() const {
        return FileName;
    }

    void setFileName(const string &fileName) {
        FileName = fileName;
    }

    bool isHidden() const override {
        if(FileName.empty()) {
            return false;
        }
        return FileName[0] == '.';
    }

    bool move(string newName) override {
        if (newName != FileName){
            setFileName(newName);
            cout << "Nome cambiato" << endl;
            return true;
        }
        else{
            cout << "Nome non cambiato" << endl;
            return false;
        }
    }

    bool create(string aName) override {
        FileName = aName;
        cout << "Creato File Linux " << FileName << endl;
        return true;
    }

private:
    string FileName;
};

#endif //FACTORY_LINUXFILE_H

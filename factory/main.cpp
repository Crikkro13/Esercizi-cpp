#include <iostream>
#include <string>

#include "WindowsFactory.h"
#include "LinuxFactory.h"
#include "File.h"

int main() {
    AbstractFactory* factory;
    bool isWindows = true;

    if (isWindows) {
        factory = new WindowsFactory;
    }
    else
        factory = new LinuxFactory;

    File* file;
    Directory* directory;

    file = factory->createFile("Gianni");
    directory = factory->createDirectory("Amogus");

    file->create("test.txt");
    directory->create("/tmp/foo");
    directory->addFile(file);
    directory->move("/tmp/bar");
    directory->list();

    return 0;
};

//
// Created by crist on 05/09/2024.
//

#ifndef ES5_NOTE_H
#define ES5_NOTE_H
#include <iostream>

using namespace std;
class Note {
public:
    virtual void printNote() const = 0;

    virtual void addTag(string tag) = 0;

    virtual string returnNoteType() const = 0;

    virtual void returnNoteTags() const= 0;

    virtual bool isTag(string tag) = 0;

    virtual string returnNoteName() const= 0;
};


#endif //ES5_NOTE_H

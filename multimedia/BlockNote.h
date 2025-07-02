//
// Created by crist on 05/09/2024.
//

#ifndef ES5_BLOCKNOTE_H
#define ES5_BLOCKNOTE_H

#include "Text.h"
#include "Image.h"

class BlockNote {
public:
    void addNote(Note* note);

    void printNotes() const;

    void searchTag(string tag);

    void noteType(Note* note);

    ~BlockNote();

private:
    list<Note*> NoteList;
};

#endif //ES5_BLOCKNOTE_H
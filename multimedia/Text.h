//
// Created by crist on 05/09/2024.
//

#ifndef ES5_TEXT_H
#define ES5_TEXT_H
#include "Note.h"
#include <list>

class Text : public Note {
public:
    explicit Text(string t) : NoteText(t) {}

    void printNote() const override;

    void addTag(string tag) override;

    string returnNoteType() const override;

    void returnNoteTags() const override;

    bool isTag(string tag) override;

    string returnNoteName() const override;

private:
    string NoteText;
    list<string> TagList;
};


#endif //ES5_TEXT_H

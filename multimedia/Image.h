//
// Created by crist on 05/09/2024.
//

#ifndef ES5_IMAGE_H
#define ES5_IMAGE_H

#include "Note.h"
#include <list>

class Image : public Note {
public:
    Image(string n, int w) : ImageName(n), Weight(w) {}

    void printNote() const override ;

    void addTag(string tag) override;

    string returnNoteType() const override;

    void returnNoteTags() const override;

    bool isTag(string tag) override;

    string returnNoteName() const override;

private:
    string ImageName;
    list<string> TagList;
    int Weight;
};

#endif //ES5_IMAGE_H

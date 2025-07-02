//
// Created by crist on 05/09/2024.
//

#ifndef ES5_AUDIO_H
#define ES5_AUDIO_H

#include "Note.h"
#include <list>

class Audio : public Note {
public:
    Audio(string n, int d) : AudioName(n), Duration(d) {}

    void printNote() const override;

    void addTag(string tag) override;

    string returnNoteType() const override;

    void returnNoteTags() const override;

    bool isTag(string tag) override;

    string returnNoteName() const override;

private:
    string AudioName;
    int Duration;
    list<string> TagList;
};

#endif //ES5_AUDIO_H

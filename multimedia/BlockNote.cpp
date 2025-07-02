//
// Created by crist on 05/09/2024.
//
#include "BlockNote.h"

void BlockNote::addNote(Note* note) {
    NoteList.push_back(note);
}

void BlockNote::printNotes() const {
    for(auto it=NoteList.begin(); it!=NoteList.end(); ++it){
        (*it)->printNote();
    }
}

void BlockNote::searchTag(string tag) {
    cout << "Note che hanno il tag " << tag << endl;
    for(auto it=NoteList.begin(); it!=NoteList.end(); ++it){
        if((*it)->isTag(tag))
            (*it)->printNote();
    }
}

void BlockNote::noteType(Note* note) {
    cout << "La nota " << note->returnNoteName() << " e' di tipo " << note->returnNoteType() << endl;
}

BlockNote::~BlockNote() {
    for(auto it=NoteList.begin(); it!=NoteList.end(); ++it){
        delete[] (*it);
    }
}

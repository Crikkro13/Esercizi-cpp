//
// Created by crist on 05/09/2024.
//
#include "Text.h"

void Text::printNote() const{
cout << "Stampando il testo: " << NoteText << endl;
}

void Text::addTag(string tag) {
TagList.push_back(tag);
}

string Text::returnNoteType() const {
return "text";
}

void Text::returnNoteTags() const {
cout << "Tag della nota " << NoteText << endl;
for(auto it = TagList.begin(); it!=TagList.end(); ++it)
cout << "     " << (*it) << endl;
}

bool Text::isTag(string tag){
    bool found = false;
    for(auto it=TagList.begin(); it!=TagList.end() && !found; ++it) {
        if((*it)==tag){
        found = true;}
    }
return found;
}

string Text::returnNoteName() const {
return NoteText;
}
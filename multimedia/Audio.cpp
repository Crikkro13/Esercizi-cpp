//
// Created by crist on 05/09/2024.
//
#include "Audio.h"

void Audio::printNote() const {
cout << "Riproducendo l'audio " << AudioName << " di durata " << Duration << " secondi" << endl;

void Audio::addTag(string tag) {
TagList.push_back(tag);
}

string Audio::returnNoteType() const {
return "audio";
}

void Audio::returnNoteTags() const {
cout << "Tag della nota " << AudioName << endl;
for(auto it = TagList.begin(); it!=TagList.end(); ++it)
cout << (*it) << endl;
}

bool Audio::isTag(string tag) {
bool found = false;
for(auto it=TagList.begin(); it!=TagList.end() && !found; ++it) {
if((*it)==tag){
found = true;
}
}
return found;
}

string Audio::returnNoteName() const{
return AudioName;
}
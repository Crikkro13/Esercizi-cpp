//
// Created by crist on 05/09/2024.
//
#include "Image.h"

void Image::printNote() const {
cout << "Mostrando l'immagine " << ImageName  << " di dimensione " << Weight << " MB" << endl;
}

void Image::addTag(string tag) {
TagList.push_back(tag);
}

string Image::returnNoteType() const {
return "image";
}

void Image::returnNoteTags() const{
cout << "Tag della nota " << ImageName << endl;
for(auto it = TagList.begin(); it!=TagList.end(); ++it)
cout << (*it) << endl;
}

bool Image::isTag(string tag) {
bool found = false;
for(auto it=TagList.begin(); it!=TagList.end() && !found; ++it) {
if((*it)==tag){
found = true;
}
}
return found;
}

string Image::returnNoteName() const{
return ImageName;
}
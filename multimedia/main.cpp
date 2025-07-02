#include <iostream>
#include "Text.h"
#include "BlockNote.h"
#include "Audio.h"

int main() {
    BlockNote* blockNote = new BlockNote();
    Text* txt = new Text("Ciao");
    Text* txt2 = new Text("Buongiorno");
    Audio* aud = new Audio("Musica.mp3",100);
    Image* img = new Image("Vacanze.png",4);
    txt2->addTag("Varie");
    txt2->addTag("Gianni");
    blockNote->addNote(txt);
    blockNote->addNote(aud);
    blockNote->addNote(img);
    blockNote->addNote(txt2);
    blockNote->printNotes();
    blockNote->searchTag("Varie");
    txt2->returnNoteTags();
    blockNote->noteType(txt2);
}

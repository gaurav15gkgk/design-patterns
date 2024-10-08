#include "include/editor.h"

void Editor :: setTextFormatter(TextFormatter *_textFormatter){
    this -> textFormatter = _textFormatter;
}

void Editor :: inputText(std :: string _text){
    this -> textFormatter -> feedText(_text);
}

void Editor :: writeText(){
    this -> textFormatter -> publishText();
}
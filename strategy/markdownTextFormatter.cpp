#include <iostream>

#include "include/markdownTextFormatter.h"

MarkDownTextFormatter :: MarkDownTextFormatter(){
    this -> text = "";
}

void MarkDownTextFormatter :: feedText(std :: string _text){
    this -> text = "**" + _text + "**";
}

void MarkDownTextFormatter :: publishText(){
    std :: cout << this -> text<< std :: endl;
}
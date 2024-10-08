#include <iostream>

#include "include/plainTextFormatter.h"

PlainTextFormatter :: PlainTextFormatter(){
    this -> text = "";
}

void PlainTextFormatter :: feedText(std :: string _text){
    this -> text = _text;
}

void PlainTextFormatter :: publishText(){
    std :: cout << this -> text<< std :: endl;
}
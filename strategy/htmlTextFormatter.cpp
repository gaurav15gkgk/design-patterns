#include <iostream>

#include "include/htmlTextFormatter.h"

HTMLTextFormatter :: HTMLTextFormatter(){
    this -> text = "";
}

void HTMLTextFormatter :: feedText(std :: string _text){
    this -> text = "<strong>" + _text + "</strong>";
}

void HTMLTextFormatter :: publishText(){
    std :: cout << this -> text<< std :: endl;
}

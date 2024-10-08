#include <iostream>

#include "include/plainTextFormatter.h"
#include "include/htmlTextFormatter.h"
#include "include/markdownTextFormatter.h"
#include "include/editor.h"

void clientCode(Editor *editor, TextFormatter * customTextFormatter, std :: string text){
    editor -> setTextFormatter(customTextFormatter);
    editor -> inputText(text);
    editor -> writeText();
}

int main(){
    Editor *editor = new Editor();
    std :: cout <<"Plain text Formatter" << std :: endl;
    TextFormatter *plainTextFormatter = new PlainTextFormatter();
    clientCode(editor, plainTextFormatter, "Jai Hind");

    delete plainTextFormatter;

     std :: cout <<"MarkDown text Formatter" << std :: endl;
    TextFormatter *markDownTextFormatter = new MarkDownTextFormatter();
    clientCode(editor, markDownTextFormatter, "Jai Hind");

    delete markDownTextFormatter;

     std :: cout <<"HTML text Formatter" << std :: endl;
    TextFormatter *htmlTextFormatter = new HTMLTextFormatter();
    clientCode(editor, htmlTextFormatter, "Jai Hind");

    return 0;
}
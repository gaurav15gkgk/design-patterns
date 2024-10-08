#ifndef EDITOR_H
#define EDITOR_H

#include "textFormatter.h"

class Editor{
private:
    TextFormatter *textFormatter;

public:
    Editor(){};
    void setTextFormatter(TextFormatter *);
    void inputText(std :: string);
    void writeText();
};

#endif //EDITOR_H

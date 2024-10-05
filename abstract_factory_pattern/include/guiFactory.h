#ifndef GUI_FACTORY_H
#define GUI_FACTORY_H

#include "button.h"

class GUIFactory {
public:
    virtual Button * createButton() = 0;
    virtual ~GUIFactory(){};
};

#endif //GUI_FACTORY_H

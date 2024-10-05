#ifndef WINDOWS_FACTORY_H
#define WINDOWS_FACTORY_H

#include "guiFactory.h"

class WindowsFactory : public GUIFactory{
public:
    Button * createButton() override;
};

#endif //WINDOWS_FACTORY_H

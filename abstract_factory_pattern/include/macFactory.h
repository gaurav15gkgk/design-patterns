#ifndef MAC_FACTORY_H
#define MAC_FACTORY_H

#include "guiFactory.h"

class MacFactory : public GUIFactory{
    public:
    Button * createButton() override;
};

#endif //MAC_FACTORY_H

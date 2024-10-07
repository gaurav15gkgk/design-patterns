#ifndef HOUSE_BUILDER_H
#define HOUSE_BUILDER_H

#include "house.h"

class HouseBuilder{
public:
    //virtual ~HouseBuilder() = default;
    virtual void buildFoundation() = 0;
    virtual void buildStructure() = 0;
    virtual void buildRoof() = 0;
    virtual House* getHouse() = 0;
};

#endif //HOUSE_BUILDER_H

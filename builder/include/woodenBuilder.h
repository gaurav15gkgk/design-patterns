#ifndef WOODEN_BUILDER_H
#define WOODEN_BUILDER_H

#include "houseBuilder.h"

class WoodenBuilder : public HouseBuilder{
private:
    House *house;
public:
    WoodenBuilder();
    void buildFoundation() override;
    void buildStructure() override;
    void buildRoof() override;
    House* getHouse() override;
};

#endif //WOODEN_BUILDER_H

#ifndef CONCRETE_BUILDER_H
#define CONCRETE_BUILDER_H

#include "houseBuilder.h"

class ConcreteHouseBuilder : public HouseBuilder{
private:
    House *house;

public:
    ConcreteHouseBuilder();
    void buildFoundation() override;
    void buildStructure() override;
    void buildRoof() override;
    House* getHouse() override;
};

#endif //CONCRETE_BUILDER_H

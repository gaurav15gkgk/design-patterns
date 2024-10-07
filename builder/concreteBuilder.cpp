#include "include/concreteBuilder.h"

ConcreteHouseBuilder :: ConcreteHouseBuilder(){
    this -> house = new House();
}

void ConcreteHouseBuilder :: buildFoundation() {
    house -> setFoundation("Concrete foundation");
}

void ConcreteHouseBuilder :: buildStructure(){
    house -> setStructure("Concrete Structure");
}

void ConcreteHouseBuilder :: buildRoof(){
    house -> setRoof("Concrete roof");
}

House* ConcreteHouseBuilder :: getHouse(){
    return house;
}
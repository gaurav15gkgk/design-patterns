#include "include/houseDirector.h"

HouseDirector :: HouseDirector(HouseBuilder * _houseBuilder){
    this -> houseBuilder = _houseBuilder;
}

void HouseDirector :: constructHouse(){
    houseBuilder -> buildFoundation();
    houseBuilder -> buildRoof();
    houseBuilder -> buildStructure();
}

void HouseDirector :: showHouse(){
    houseBuilder -> getHouse() -> showHouse();
}
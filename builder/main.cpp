#include <iostream>

#include "include/houseDirector.h"
#include "include/concreteBuilder.h"
#include "include/woodenBuilder.h"

void clientCode(HouseDirector *houseDirector){
    houseDirector -> constructHouse();
    houseDirector -> showHouse();
}

int main(){
    ConcreteHouseBuilder *concreteHouseBuilder = new ConcreteHouseBuilder();
    WoodenBuilder *woodenBuilder = new WoodenBuilder();
    HouseDirector *houseDirector = new HouseDirector(concreteHouseBuilder);

    clientCode(houseDirector);

    delete houseDirector;

    houseDirector = new HouseDirector(woodenBuilder);
    clientCode(houseDirector);

    delete houseDirector;

    delete woodenBuilder;
    delete concreteHouseBuilder;


}
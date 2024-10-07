#include "include/woodenBuilder.h"

WoodenBuilder :: WoodenBuilder(){
    this -> house = new House(); 
}

void WoodenBuilder :: buildFoundation(){
    house ->setFoundation("wooden Foundation");
}

void WoodenBuilder :: buildStructure(){
    house -> setStructure("Wooden Structure");
}

void WoodenBuilder :: buildRoof(){
    house -> setRoof("Wooden roof");
}

House * WoodenBuilder:: getHouse(){
    return house;
}
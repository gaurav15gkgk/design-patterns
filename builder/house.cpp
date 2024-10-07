#include <iostream>

#include "include/house.h"

void House :: setFoundation(std :: string _foundation){
    this -> foundation = _foundation;
}

void House :: setRoof(std :: string _roof){
    this -> roof = _roof;
}

void House :: setStructure(std :: string _structure){
    this -> structure = _structure;
}

void House :: showHouse(){
    std :: cout << "Foundation :" << this -> foundation << std :: endl;
    std :: cout << "Roof :" << this -> roof << std :: endl;
    std :: cout << "Structure :" << this -> structure << std :: endl;

}
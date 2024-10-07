#ifndef HOUSE_DIRECTOR_H
#define HOUSE_DIRECTOR_H

#include "houseBuilder.h"

class HouseDirector{
private:
    HouseBuilder * houseBuilder;

public:
    HouseDirector(HouseBuilder *);
    void constructHouse();
    void showHouse();
};

#endif //HOUSE_DIRECTOR_H

#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House{
private:
    std :: string foundation;
    std :: string roof;
    std :: string structure;

public:
    void setFoundation(std :: string);
    void setRoof(std :: string);
    void setStructure(std :: string);
    void showHouse();
};

#endif //HOUSE_H

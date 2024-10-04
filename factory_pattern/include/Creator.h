#ifndef CREATOR_H
#define CREATOR_H

#include "Product.h"

class Creator{
public:
    virtual ~Creator(){};
    virtual Product* FactoryMethod() const = 0;
    std :: string doSomething() const;
};

#endif //CREATOR_H

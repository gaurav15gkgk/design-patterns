#ifndef CONCRETE_CREATOR1_H
#define CONCRETE_CREATOR1_H

#include "Creator.h"
#include "ConcreteProduct1.h"

class ConcreteCreator1 : public Creator{
public:
    Product * FactoryMethod() const override;
    //std :: string doSomething() const override;
};

#endif //CONCRETE_CREATOR1_H

#ifndef CONCRETE_CREATOR2_H
#define CONCRETE_CREATOR2_H

#include "Creator.h"
#include "ConcreteProduct2.h"

class ConcreteCreator2 : public Creator{
public:
    Product * FactoryMethod() const override;
    //std :: string doSomething() const override;
};

#endif //CONCRETE_CREATOR2_H

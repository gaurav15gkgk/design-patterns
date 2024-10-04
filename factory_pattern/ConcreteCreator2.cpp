#include "include/ConcreteCreator2.h"

Product* ConcreteCreator2 :: FactoryMethod() const {
    return new ConcreteProduct2();
}
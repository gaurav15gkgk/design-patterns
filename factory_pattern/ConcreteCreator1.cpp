#include "include/ConcreteCreator1.h"

Product* ConcreteCreator1 :: FactoryMethod() const {
    return new ConcreteProduct1();
}
#ifndef CONCRETE_PRODUCT1_H
#define CONCRETE_PRODUCT1_H

#include "Product.h"

class ConcreteProduct1 : public Product{
public:

    std :: string someOperation() const override;
};

#endif //CONCRETE_PRODUCT1_H

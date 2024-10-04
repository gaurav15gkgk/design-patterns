#ifndef PRODUCT_H
#define PRODUCT_H

#include<string>

class Product {
public:
    virtual ~Product() {};
    virtual std:: string someOperation() const = 0;
};
#endif //PRODUCT_H

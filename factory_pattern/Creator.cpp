#include "include/Creator.h"

std :: string Creator :: doSomething() const {
    Product * product = this -> FactoryMethod();
    std :: string result = "Creator : the same creator works for " + product -> someOperation() ;
    delete product;
    return result;
}
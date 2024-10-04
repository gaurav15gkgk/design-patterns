#include <iostream>

#include "include/ConcreteCreator1.h"
#include "include/ConcreteCreator2.h"

void clientCode(const Creator * creator){
    std :: cout <<"Client code works but I dont know which creator class executes"<<std :: endl;
    std :: cout << creator -> doSomething() <<std:: endl;
}

int main(){

    std :: cout << "App starts with creator1 "<< std :: endl;
    Creator * creator1 = new ConcreteCreator1();
    clientCode(creator1);

    delete creator1;

    std :: cout << "App starts with creator2 "<< std :: endl;
    Creator *creator = new ConcreteCreator2();
    clientCode(creator);

    delete creator;
    return 0;
}
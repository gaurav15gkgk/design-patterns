#include <iostream>

#include "include/windowsFactory.h"
#include "include/macFactory.h"

void clientCode(GUIFactory * factory){
    Button * btn = factory -> createButton();
    btn -> render();

    delete btn;
}

int main(){
    GUIFactory *windowsFactory = new WindowsFactory();
    clientCode(windowsFactory);
    delete windowsFactory;

    GUIFactory *macFactory = new MacFactory();
    clientCode(macFactory);
    delete macFactory;
    
    return 0;
}

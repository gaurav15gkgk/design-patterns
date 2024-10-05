#include "include/windowsFactory.h"
#include "include/windowsButton.h"

Button* WindowsFactory :: createButton(){
    return new WindowsButton();
}
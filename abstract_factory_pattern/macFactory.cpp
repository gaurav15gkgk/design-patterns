#include "include/macFactory.h"
#include "include/macButton.h"

Button * MacFactory :: createButton(){
    return new MacButton();
}
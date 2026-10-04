#include "bill.h"
#include <iostream>

void Bill::print() const{
    std::cout<<category<<" "<<amount<<std::endl;
}
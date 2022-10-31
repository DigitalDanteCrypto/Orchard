#include <iostream>
#include "AppleTree.h"
AppleTree::AppleTree() : Tree("Apple tree", 0, 150, Months::SEPTEMBER, Months::NOVEMBER){

}

void AppleTree::Grow() {
    std::cout << "Silence sa pousse ";
    _fruitPerTree  += 283;
    std::cout << _name  <<" : " << _fruitPerTree << std::endl;

}



#include "PearTree.h"
#include <iostream>

PearTree::PearTree() : Tree("Pear Tree", 0, 90, Months::OCTOBER, Months::DECEMBER){
}

void PearTree::Grow() {
    std::cout << "Silence sa pousse ";
    _fruitPerTree  += 120;
    std::cout << _name  <<" : " << _fruitPerTree << std::endl;
}


#include "CherryTree.h"
#include <iostream>

CherryTree::CherryTree() : Tree("Cherry Tree", 0, 5, Months::MAY, Months::JULY){
}

void CherryTree::Grow() {
    std::cout << "Silence sa pousse ";
    _fruitPerTree  += 20000;
    std::cout << _name  <<" : " << _fruitPerTree << std::endl;
}


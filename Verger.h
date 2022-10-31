#pragma once
#include <vector>
#include "Tree.h"

class Verger {
public:

    int numberOfTrees;
    std::vector<Tree*> _treeList;

Verger(int);

    void TimePassing();
};

#include <iostream>
#include "Verger.h"
#include "Tree.h"
#include "AppleTree.h"
#include "CherryTree.h"
#include "PearTree.h"

int main() {
Verger newVerger(3);
std::cout << "THE VERGER HAS BEEN CREATED" << std::endl;
std::cout << "THE YEAR AS BEGUN" << std::endl;
std::cout << "****************************" << std::endl;

newVerger._treeList.emplace_back(new AppleTree());
newVerger._treeList.emplace_back(new CherryTree());
newVerger._treeList.emplace_back(new PearTree());

    newVerger.TimePassing();

    return 0;
}

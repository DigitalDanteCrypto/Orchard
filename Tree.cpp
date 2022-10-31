#include <iostream>
#include "Tree.h"
#include <cmath>

Tree::Tree(std::string name, float fruitPerTree,float weightOfFruit, Months months, Months endHarvest) {
    _name = name;
    _fruitPerTree = fruitPerTree;
    _weightOfFruit = weightOfFruit;
    _harvestMonth = months;
    _endHarvest = endHarvest;
}

void Tree::RottingFruits() {
        _fruitPerTree = _fruitPerTree - (_fruitPerTree / 2);
        std::cout << "ROTTING FRUITS " << _name << " : " << round(_fruitPerTree) << std::endl;

    }

void Tree::Winter() {
        _fruitPerTree = 0;
        std::cout << "C'est l'hiver : " << _name << " : " << _fruitPerTree << std::endl;
        //FATALITY
    }


void Tree::TimePassing(Months currentMonth) {

    if(currentMonth >= Months::JANUARY && currentMonth <= Months::MARCH) {
        //WINTER
        Winter();
    }else if(currentMonth >= Months::APRIL && currentMonth <= Months::JUNE) {
        //GROW
        Grow();
    } else if(currentMonth >= Months::JULY && currentMonth <= Months::SEPTEMBER) {
        //GROWS & LOOSE
        Loose();
    } else if (currentMonth >= Months::OCTOBER && currentMonth <= Months::DECEMBER) {
        //ROTTING
       RottingFruits();
       //To wipe all fruits in Winter
        if (currentMonth == Months::DECEMBER) {
            Winter();
        }
    }
}
void Tree::Loose() {
float e = 0.05;
_fruitPerTree = _fruitPerTree - (e * (float)_fruitPerTree);
std::cout << "LOOSING = " << _name << " " << round(_fruitPerTree) << std::endl;
}



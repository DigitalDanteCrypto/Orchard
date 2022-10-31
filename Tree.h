#pragma once

#include <string>

enum class Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
};

class Tree {

public:
    std::string _name;
    float _fruitPerTree;
    float _weightOfFruit;
    Months _harvestMonth;
    Months _endHarvest;


    virtual void Grow(){

    };

    void Loose();

    void RottingFruits();

    void Winter();


void TimePassing(Months);



 Tree(std::string, float, float ,Months, Months);


};

#include <iostream>
#include "Verger.h"
Verger::Verger(int numberTrees) {
    numberOfTrees = numberTrees;
}
void Verger::TimePassing() {
    bool restart;
    int yearNumber = 1;
do {
    std::cout << "Year Number : " << yearNumber << std::endl;
    std::cout << "--------------------------" << std::endl;
    for (int i = 1; i < 13; i++) {
        Months currentMonth;
        switch (i) {
            case 1 :
                currentMonth = Months::JANUARY;
                break;
            case 2 :
                currentMonth = Months::FEBRUARY;
                break;
            case 3:
                currentMonth = Months::MARCH;
                break;
            case 4 :
                currentMonth = Months::APRIL;
                break;
            case 5 :
                currentMonth = Months::MAY;
                break;
            case 6 :
                currentMonth = Months::JUNE;
                break;
            case 7 :
                currentMonth = Months::JULY;
                break;
            case 8 :
                currentMonth = Months::AUGUST;
                break;
            case 9 :
                currentMonth = Months::SEPTEMBER;
                break;
            case 10 :
                currentMonth = Months::OCTOBER;
                break;
            case 11 :
                currentMonth = Months::NOVEMBER;
                break;
            case 12 :
                currentMonth = Months::DECEMBER;
                break;
            default:
                std::cout << "ERROR WHILE PASSING MONTHS" << std::endl;
                break;
        }
        std::cout << "Current Month = " << static_cast<int>(currentMonth) << std::endl;
        for (auto &tree: _treeList) {
            tree->TimePassing(currentMonth);
        }
    }
    std::string answer;
    std::cout << "START THE YEAR AGAIN ? y/n " << std::endl;
    std::cin >> answer;
    if (answer == "y") {
        restart = true;
        yearNumber++;
    } else {
        restart == false;
    }
} while (restart);
}
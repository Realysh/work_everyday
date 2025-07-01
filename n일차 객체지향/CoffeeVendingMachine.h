#ifndef COFFEEVENDINGMACHINE_H
#define COFFEEVENDINGMACHINE_H

#include "Container.h"
#include <string>
using namespace std;

class CoffeeVendingMachine{
    string name;
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectSugar();
    void selectAmericano();
    void show();
public:
    CoffeeVendingMachine(string name){this->name = name;}
    void run();
};
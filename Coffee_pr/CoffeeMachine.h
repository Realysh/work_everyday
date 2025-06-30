#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine {
    int coffee;
    int water;
    int sugar;
public:
    CoffeeMachine(int c,int w,int s);
    void show();
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill();
};

#endif
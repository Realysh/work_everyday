#include <iostream>
using namespace std;
#include "CoffeeMachine.h"


int main(){
    CoffeeMachine java(5,10,3);
    while(true){
        cout<<"Espresso:1\nAmericano:2\nsugar:3\nFill:4\nStop:5\n"<<endl;
        int order;
        cin>>order;
        switch(order){
            case 1:
                java.drinkEspresso(); break;
            case 2:
                java.drinkAmericano(); break;
            case 3:
                java.drinkSugarCoffee(); break;
            case 4:
                java.fill(); break;
            case 5:
                return 0;
        }
    }
    return 0;
}
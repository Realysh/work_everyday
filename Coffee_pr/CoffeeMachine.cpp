#include "CoffeeMachine.h"
#include <iostream>
using namespace std;
CoffeeMachine::CoffeeMachine(int c,int w,int s){
    coffee=c;
    water=w;
    sugar=s;
}

void CoffeeMachine::show(){
    cout<<"커피 머신 상태, 커피:"<<coffee;
    cout<<"\t물:"<<water;
    cout<<"\t설탕:"<<sugar<<endl;
}

void CoffeeMachine::drinkEspresso(){
    if(coffee<=0||water<=0){
        cout<<"원료가 부족"<<endl;
        return;
    }
    coffee--;
    water--;
    cout<<"에스프레소 드세요~"<<endl;
}

void CoffeeMachine::drinkAmericano(){
    if(coffee<=0||water<=1){
        cout<<"원료가 부족"<<endl;
        return;
    }
    coffee--;
    water-=2;
    cout<<"아메리카노 드세요"<<endl;
}

void CoffeeMachine::drinkSugarCoffee(){
    if(coffee<=0||water<=1||sugar<=0){
        cout<<"원료가 부족"<<endl;
        return;
    }
    coffee--;
    water-=2;
    sugar--;
    cout<<"설탕커피 드세요"<<endl;
}

void CoffeeMachine::fill(){
    coffee=10;
    water=10;
    sugar=10;
}
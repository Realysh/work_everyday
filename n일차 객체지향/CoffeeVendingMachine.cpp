#include <iostream>
using namespace std;
#include "CoffeeVendingMachine.h"

void CoffeeVendingMachine::run(){
    cout<<"*****  "<<name<<"이 작동합니다."<<endl;
    
    while(true){
        cout<<"메뉴를 눌러주세요(1:에 2:아 3:설 4:잔 5:채>>";
        int menu;
        cin>>menu;
        switch(menu){
            case 1: selectEspresso(); break;
            case 2: selectAmericano(); break;
            case 3: selectSugarCoffee(); break;
            case 4: show(); break;
            case 5: fill(); break;
        }
    }
}

void CoffeeVendingMachine::fill(){
    for(int i=0;i<3;i++){
        tong[i].fill();
    }
}

void CoffeeVendingMachine::show(){
    cout<<"커피: ";
    tong[0].show();

    cout<<"물: ";
    tong[1].show();

    cout<<"설탕: ";
    tong[2].show();
}

void CoffeeVendingMachine::selectEspresso(){
    tong[0].consume(1);
    tong[1].consume(1);
}

void CoffeeVendingMachine::selectAmericano(){
    tong[0].consume(1);
    tong[1].consume(2);
}

void CoffeeVendingMachine::selectSugarCoffee(){
    tong[0].consume(1);
    tong[1].consume(2);
    tong[2].consume(1);
}
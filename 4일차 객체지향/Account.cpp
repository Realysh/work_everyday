#include "Account.h"


//클래스 구현부
Account::Account(string o, int i, int b){
    owner = o;
    id = i;
    balance = b;
}

void Account::deposit(int money){
    balance+=money;
}

int Account::withdraw(int money){
    if(balance>money){
        balance-=money;
        return money;
    }
    else{
        int res = balance; //res => tmp 느낌이네
        balance=0;
        return res;
    }
}

int Account::inquiry() {
    return balance;
}
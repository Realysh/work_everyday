#include "Account.h" 

#include <iostream>
using namespace std;

int main(){
    Account a("kitae",1,5000);
    a.deposit(5000);
    cout<<a.getOwner()<<"의 잔액은"<<a.inquiry()<<endl;
    
    int money = a.withdraw(20000); //20000출금
    cout<<a.getOwner()<<"의 잔금은"<<a.inquiry()<<"원"<<endl;
    cout<<"출금 금액은" << money <<"입니다"<<endl;

    money = a.withdraw(40000); //20000출금
    cout<<a.getOwner()<<"의 잔금은"<<a.inquiry()<<"원"<<endl;
    cout<<"출금 금액은" << money <<"입니다"<<endl;
}
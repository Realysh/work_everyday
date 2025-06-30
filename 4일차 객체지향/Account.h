#ifndef ACCOUNT_H
#define ACCOUNT_H

//클래스 선언부
#include <string>
using namespace std;

class Account{
    string owner;
    int id;
    int balance;
    //다 숨겨야 하니까 private 형식인 class로 설정
public:
    Account(string o, int i, int b); //생성자 => return은 가능하지만 return값 존재 x
    void deposit(int money);
    int withdraw(int money); //money << 찾고자 하는 금액, 실제로 찾는 금액을 리턴.
    string getOwner(){ return owner; }
    int inquiry(); //조회 기능 잔금.
};

#endif
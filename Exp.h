#ifndef EXP_H
#define EXP_H
//선언부
class Exp{
private: //encapsulaion / 생략 가능함.
    int base; //베이스
    int exp; //지수 / 공개된 지수가 아님.
public:
    Exp(int b,int e); //생성자(1) /prototype(원형) 선언
    Exp(int b); //생성자(2)
    Exp();
    int getValue(); //함수는 return type이 있어야 함.
    //또한 camel case 해야함.->2번째 첫글자 대문자로 표기
    int getBase() {return base;} //inline 함수
    int getExp(){ return exp;}
    bool equals(Exp b);
    int calc();
};

#endif
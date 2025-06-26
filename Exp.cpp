#include "Exp.h"
//구현부
Exp::Exp(int b,int e){
    base=b;
    exp=e;
    calc();
}

Exp::Exp(int b){
    base=b;
    exp=1;
    calc();
}

//혹은
// Exp::Exp(int b):Exp(b,1){
// }
//이렇게 풀어냄


Exp::Exp(){
    base=1;
    exp=1;
    calc();
}
//해당 코드는
// Exp::Exp():Exp(1,1){
// }

int Exp::getValue(){
    return calc();
}

int Exp::calc(){
    int res=1;
    for(int i=0;i<exp;i++){
        res=res*base;
    }
}

bool Exp::equals(Exp b){
    if(getValue()==b.getValue()) return true;
    else return false;
}
// int main(){
//     Exp a(3,2); //Exp 클래스 / 1.(컴파일하면)메모리를 할당 받은 객체 생성됨. 2.함수가 호출이 됨.
//     Exp b(9); 
//     Exp c; //1,1승을 의미함.(매개변수 x 생성자 생성 필요.)

//     //a,b,c가 각각의 메모리를 할당받은 객체가 생성됨

//     cout << a.getValue()<<' '<< b.getValue()<<' '<<c.getValue()<<endl;
//     cout << a.getBase()<<' '<<a.getExp()<<' '<<endl;
//     cout << b.getBase()<<' '<<b.getExp()<<endl;
    
//     if(a.equals(b)){
//         cout<<"same"<<endl;
//     }
//     else
//         cout<<"not same"<<endl;
// }
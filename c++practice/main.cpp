#include <iostream>
using namespace std;
class Power{
    int kick;
    int punch;
public:
    Power(int kick=0,int punch=0){this->kick=kick;this->punch=punch;} //
    void show();
    Power operator +(Power op2);
    Power &operator +=(Power op2);
    bool operator ==(Power op2);
};
 
Power& Power::operator +=(Power op2){
    kick=kick+op2.kick;
    punch=punch+op2.punch;
    return *this;
}

Power Power::operator +(Power op2){
    Power tmp; //디폴트 매개 변수 덕에 생성 가능.

    tmp.kick = kick + op2.kick;
    tmp.punch = punch + op2.punch;
    
    return tmp;
}

bool Power::operator ==(Power op2){
    if(kick==op2.kick && punch == op2.punch)
        return true;
    else
        return false;
}

void Power::show(){
    cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

int main(){
    Power a(3,5),b(4,6),c;
    a.show();
    b.show();
    c=a+b; //컴파일러는 a.+(b) 이렇게 변형을 하여 확인을 함. a라는 객체에서 +()함수를 부르도록 시도
    c.show();
    if(a==b) cout<<"두 파워가 같다"<<endl; //a.==(b);
    else cout<<"두 파워가 다르다"<<endl;

    c=a+=b; // a.+=(b); //이 객체 내에 이 함수가 있어?
    c.show();
    return 0;
}
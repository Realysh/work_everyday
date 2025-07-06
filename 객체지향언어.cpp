#include <iostream>
using namespace std;
class Power{
    int kick;
    int punch;
public:
    Power(int kick=0,int punch=0){this->kick=kick;this->punch=punch;} //
    void show();
    friend Power operator ++(Power &op2,int n);
    friend Power &operator ++(Power &op2);
    friend Power operator +(Power op1,Power op2);
    Power &operator <<(int n);
};

Power &Power::operator <<(int n){
    kick+=n;
    punch+=n;
    return *this;
}
Power operator +(Power op1,Power op2){
    Power tmp;
    tmp.punch=op1.punch+op2.punch;
    tmp.kick = op1.kick + op2.kick;
    return tmp;
}
Power &operator ++(Power &op2){
    op2.kick++;
    op2.punch++;
    return op2;
}

Power operator ++(Power &op2,int n){
    Power tmp = op2;
    op2.kick++;
    op2.punch++;
    return tmp;
}
void Power::show(){
    cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

int main(){
    Power a(3,5),b,c;
    a.show();
    b.show();
    b=a++; //값을 먼저 사용하고 이후 증가.
    a.show();
    b.show();
    b=++a;
    a.show();
    b.show();
    c=a+b;
    c.show();
    cout<<"======A status====="<<endl;
    a.show();
    a<<1<<1<<1;
    a.show();

}
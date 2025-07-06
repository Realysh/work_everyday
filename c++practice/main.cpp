#include <iostream>
using namespace std;
class Power{
    int kick;
    int punch;
public:
    Power(int kick=0,int punch=0){this->kick=kick;this->punch=punch;} //
    void show();
    Power operator +(int n);
    
};

Power Power::operator +(int n){
    
    // kick = kick + n;
    // punch = punch + n;
    // return *this;  이렇게 되면 a 자체가 바뀌기 때문에
    Power tmp;
    tmp.kick=this->kick+n;
    tmp.punch=this->punch+n;
    return tmp;
}

void Power::show(){
    cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

int main(){
    Power a(3,5),b,c;
    b=a+2; //a.+(2);
    b.show();

    c=a+2;
    c.show();
    a.show();
    // b=++a;
    // a++=b;
    return 0;
}
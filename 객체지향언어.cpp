#include <iostream>
using namespace std;

//c++ day3 chp3 : 지역객체와 전역객체의 생성 및 소멸 순서

//클래스 선언부
class Circle{
public:
    int r;
    Circle();
    Circle(int radius);
    ~Circle();
    double area();
};
Circle glDonut(1000);
Circle glPizza(2000);
Circle::Circle(){
    r=1;
    cout<<"반지름"<<r<<"원 생성"<<endl;
}

Circle::Circle(int radius):r(radius){
    cout<<"반지름"<<r<<"원 생성"<<endl;
}

Circle::~Circle(){
    cout<<"반지름"<<r<<"원 소멸"<<endl;
}

double Circle::area(){
    return r*r*3.14;
}

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
    cout<<"---------------\n";
    //소멸선.
    //이 객체들은 실행이 끝나면 바로 소ㅕㄹ됨.
}
int main(){
    Circle donut; //여기서 이미 Circle클래스 호출해서 
    //원의 반지름 1 출력됨.
    Circle pizza(30);
    f(); //함수 실행하면 끝남.4
}
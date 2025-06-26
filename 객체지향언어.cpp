#include <iostream>
#include <string>
using namespace std;

//클래스 선언부
class Circle{
public:
    int radius;
    double getArea();
    Circle(int r);
};
//클래스 구성부
Circle::Circle(int r):radius(r){
    cout<<"반지름"<<radius<<"원 생성"<<endl;
}
double Circle::getArea(){
    return radius*radius*3.14;
}
int main(){
    Circle pizza(30);
    Circle donut(1);
    
    double area=donut.getArea();
    cout<<"donut의 면적은"<<area<<"입니다."<<endl;
    area=pizza.getArea();
    cout<<"pizza의 면적은"<<area<<"입니다."<<endl;
    cout<<area;
}
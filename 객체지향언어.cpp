#include <iostream>
using namespace std;

class Circle{
// public:
    int radius;
public:
    Circle();
    Circle(int r);
    double getArea();
};
Circle::Circle(){
    radius=1;
}
Circle::Circle(int r){
    radius=r;
}
double Circle::getArea(){
    return radius*radius*3.14;
}
int main(){
    Circle waffle;
    waffle.radius=5;
    
    double area=waffle.getArea();
    cout<<"원의 반지름>>"<<waffle.radius<<" 원의 넓이>>"<<area<<endl;
}
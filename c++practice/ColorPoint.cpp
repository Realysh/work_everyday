#include "ColorPoint.h"
#include "Point.h"
#include <iostream>
using namespace std;

ColorPoint::ColorPoint() : Point(0,0){ //-> 기본 생성자가 없다고 뜸
    //wht -> ColorPoint::ColorPoint():Point(int x,int y) <- 이렇게 해석.
    color="BLACK";

}
ColorPoint::ColorPoint(int x, int y, string color) : Point(x, y) {
    this->color = color;
}

void ColorPoint::setPoint(int x,int y){
    move(x,y);
}

void ColorPoint::setColor(string color){
    this->color=color;
}

void ColorPoint::show(){
    cout<<color<<"색으로 ("<<getX()<<','<<getY()<<")에 위치한 점입니다."<<endl;
}

void ColorPoint::up(){
    move(getX(),getY()+1);
}
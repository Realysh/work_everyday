#include <iostream>
using namespace std;
#include "Shape.h"
void Shape::draw(){
    cout<<"==shape=="<<endl;
}

void Shape::paint(){
    draw(); //동적바인딩되는 함수 호출.
}

Shape* Shape::add(Shape* p){
    next=p;
    return p; //새로 달려진 놈의 주소를 준다.
}


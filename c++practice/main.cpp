#include <iostream>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

void printAll(Shape* p){
    while(p!=NULL){
        p->paint();
        p=p->getNext();
    }
}
int main(){
    Shape* pStart=NULL;
    Shape* pLast;
    pStart=new Circle(); //1.
    pLast=pStart;

    Shape* p = new Rect();//2.
    pLast=pLast->add(p); //이 부분이 존나 중요.
    
    //3.
    pLast = pLast->add(new Circle());
    pLast = pLast->add(new Line());
    pLast = pLast->add(new Rect());

    printAll(pStart);
}
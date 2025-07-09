#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
class Shape{
    Shape* next;//next는 Shape의 상속을 받은 객체를 가리킴
protected:
    virtual void draw();
    virtual ~Shape(){}
public:
    Shape(){next=NULL;}
    Shape* add(Shape* p);
    void paint();
    Shape* getNext(){return next;}
};
#endif
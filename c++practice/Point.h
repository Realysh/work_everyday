#ifndef POINT_H
#define POINT_H
class Point{
    int x,y;
public:
    Point(int x,int y){this->x=x;this->y=y;}
    int getX() { return x; } // getter 객체지향언어는 getter을 가짐 -> getter을 가짐
    int getY() { return y; }
    void setPoint(int x,int y){ this->x=x;this->y=y;} //setter -> 무조건 가져야함.
protected:
    void move(int x,int y){this->x=x;this->y=y;}
};

#endif
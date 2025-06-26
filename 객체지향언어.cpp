#include <iostream>
#include <string>
using namespace std;

//클래스 선언부
class Rectangle{
public:
    int width;
    int height;

    Rectangle();
    Rectangle(int length);
    Rectangle(int w,int h);
    bool isSquare();
};
//클래스 구성부
Rectangle::Rectangle(){
    width=height=1;
}
Rectangle::Rectangle(int length){
    width=height=length;
}
Rectangle::Rectangle(int w,int h){
    width=w;
    height=h;
}
bool Rectangle::isSquare(){//따로 매개변수를 받지는 않음.
    if(width==height) return true;
    else return false;
}
int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout<<"rect1는 정사각형이다\n";
    if(rect2.isSquare()) cout<<"rect2는 정사각형이다\n";
    if(rect3.isSquare()) cout<<"rect3는 정사각형이다\n";
}
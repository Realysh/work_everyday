#include <iostream>
using namespace std;
class Point{
    int x,y;
public:
    void set(int x,int y){this->x=x;this->y=y;}
    void showPoint(){
        cout<<"("<<x<<','<<y<<")"<<endl;
    }
};

class ColorPoint : public Point{
    string color;
public:
    void setColor(string color){this->color=color;}
    void showColorPoint();
    // void set(int x,int y){this->x=x;this->y=y;}
    // void showPoint(){
    //     cout<<"("<<x<<','<<y<<")"<<endl;
    // }
};

void ColorPoint::showColorPoint(){
    cout<<color<<":";
    showPoint(); //Point class의 함수 호출
}
int main(){
    Point p; // 기본 클래스 객체
    p.set(2,3);
    p.x=5;
    p.y=5;
    p.showPoint();

}
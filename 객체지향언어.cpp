#include <iostream>
using namespace std;
class Circle{
int radius;
public:
    Circle(){this->radius=1;}
    Circle(int r){radius=r;}
    void setRadius(int radius){this->radius=radius;}
    double getArea(){return 3.14*radius*radius;}
};

int main(){
    int n=2;
    int &refn=n;

    Circle c;
    Circle &refc=c;
    
    cout<<c.getArea()<<' '<<refc.getArea()<<endl;
    refc.setRadius(4);
    cout<<c.getArea()<<' '<<refc.getArea()<<endl;
}
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Circle{
    int radius;
public:
    void setRadius(int r){radius=r;}
    double getArea();
};

double Circle::getArea(){
    return radius*radius*3.14; 
}
int main() {
	Circle circleArray[3];

    for(int i=0;i<3;i++){
        circleArray[i].setRadius(10*(i+1));
        cout<<"Circle"<<i<<"의 면적은"<<circleArray[i].getArea()<<endl;
    }

    // Circle *p;
    // p=circleArray;
    Circle *p=circleArray;
    for(int i=0;i<3;i++){
        cout<<"Circle"<<i<<"의 면적은"<<p[i].getArea()<<endl;
    }
}
#include <iostream>
using namespace std;

class Rectangle{
public:
    int width;
    int height;
    int getArea();
};
int Rectangle::getArea(){
    return width*height;
}
int main(){
    Rectangle square;
    
    cout<<"너비>>";
    cin>>square.width;
    cout<<"높이";
    cin>>square.height;

    int area=square.getArea();
    cout<<"사각형의 면적은 "<<area;
    return 0;
}
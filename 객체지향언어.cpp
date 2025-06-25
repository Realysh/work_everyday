#include <iostream>
#include <string>
using namespace std;

//클래스 선언부
class Circle{
public: //공개한다.
    int radius;
    double getArea(); //멤버 함수를 가지고 있음.


};

// 클래스 구현부
double Circle::getArea(){
    return 3.14*radius*radius;
}
 
int main(){
    int n; //정수 타입의 변수 n 생성.
        //정수를 저장할 공간 할당받고 이 공간을 n이라고 부르겠다.
    Circle donut; //Circle 타입의 객체 donut 생성
        //Circle 멤버를 모두 저장할 공간을 할당받고 이 공간(객체)를 donut이라고 명명.
    
    //객체 활용
    donut.radius=1;
    double area = donut.getArea(); //너 면적이 얼마니? >> 실행하게 함.
    cout << "donut의 면적은"<<area<<"입니다."<<endl;

    Circle pizza;
    pizza.radius=30;
    area = pizza.getArea();
    cout<<"donut의 면적은"<<area<<"입니다."<<endl;
}
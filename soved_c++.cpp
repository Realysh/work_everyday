/*
    소스 : simplec++.cpp
    cout과 <<연산자를 이용하여 화면 출력
*/
#include <iostream>

double area(int r){
    return 3.14*r*r;
}
int main(){ //한줄 짜리 주석문. min()함수의 리턴타입은 int가 표준.
    int n=3;
    char c='#';
    std::cout << c <<5.5<<'-'<<n<<"hello"<<true<<std::endl;
    std::cout << "n+5 = "<<n+5<<'\n';
    std::cout <<"면적은"<<area(n);
}
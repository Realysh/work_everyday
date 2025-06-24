/*
    소스 : simplec++.cpp
    cout과 <<연산자를 이용하여 화면 출력
*/
#include <iostream>

int main(){ //한줄 짜리 주석문. min()함수의 리턴타입은 int가 표준.

    std::cout << "hello\n"; //화면에 hello 문자열 출력.
    //혹은
    std::cout << "hello" << std::endl;
    //std::endl; <- 조작자(11장에서 설명)
    
    std::cout << "첫번째 맛보기";
    //<< : 연산자(+) 더하기랑 같음.
    //return 0; //종료 코드. 부모프로세스에게 종료 이유를 전달함.
    //컴파일러가 return 0 을 안 써도 default로 0을 리턴한다고 생각
    std::cout << "\nhello world" << "안녕하세요";

}
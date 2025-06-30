#ifndef CONTAINER_H //선언되지 않았다면
#define CONTAINER_H

//클래스 선언부
#include <string>
using namespace std;

class Container{
    static const int MAX=10;
    int size;
public:
    Container(){size=MAX;}
    Container(int size){this->size = size;}
    int getSize();
    void fill();
    void consume(int amout);
};

#endif
#include <iostream>
#include "ColorPoint.h"
using namespace std;

int main(){
    ColorPoint cp(5,5,"Red");
    cp.setPoint(10,20); //ColorPoint클래스에다가 작성.
    cp.setColor("BLUE");
    cp.show();

    ColorPoint zeroPoint;
    zeroPoint.show();
    zoroPoint.up();
    zoroPoint.show();
}
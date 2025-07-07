#ifndef COLORPOINT_H
#define COLORPOINT_H

#include "Point.h"
#include <string>
using namespace std;

class ColorPoint : public Point{
    string color;
public:
    ColorPoint(int x,int y,string color);
    ColorPoint();
    void setPoint(int x,int y);
    void setColor(string color);
    void show();
    void up();
};

#endif
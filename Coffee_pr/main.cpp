#include <iostream>
using namespace std;

class Rect; //전방 선언
class Rectmanager{
public:
    bool equals(Rect a,Rect b);
};
class Rect{
int width;
int height;
public:
    Rect(int width,int height);
    friend bool Rectmanager::equals(Rect a,Rect b); //friend는 여기서만 한 번 쓰면 됨.
};

bool Rectmanager::equals(Rect a,Rect b){
    if(a.width==b.width&&a.height==b.height)
        return true;
    else
        return false;
}

Rect::Rect(int width,int height){
    this->width=width;
    this->height=height;
}

int main(){
    Rect a(3,4),b(4,5);
    Rectmanager r;
    if(r.equals(a,b))cout <<"equal"<<endl;
    else cout<<"not equal"<<endl;
    return 0;
}
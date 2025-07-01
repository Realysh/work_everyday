#include <iostream>
using namespace std;
#include "Container.h"
using namespace std;

int Container::getSize(){
    return size;
}

//부족한 양 보충
void Container::fill(){
    size=MAX;
}

void Container::consume(int amount){
    if(size<amount)
        size=0;
    else
        size-=amount;
}

void Container::show(){
    for(int i=0;i<size;i++)
        cout<<'*';

    cout<<endl;
}
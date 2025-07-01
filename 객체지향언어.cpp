#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Stack{
    int p[10]={0}; //초기화 할 필요는 없긴함.
    int tos=0;
public:
    Stack(){}//생성자
    bool push(int n); //성공하면 true, 실패하면 false
    bool pop(int &n);
};
bool Stack::push(int n){
    if(tos>=10)
        return false;
    p[tos]=n;
    tos++;
}
bool Stack::pop(int &n){
    if(tos<=0)
        return false;
    tos--;
    n=p[tos];
}
int main()
{
    Stack s;
    int n;
    s.push(5);
    s.push(6);
    s.pop(n);
    cout<<n;
    s.pop(n);
    cout<<n;
    s.pop(n);
    cout<<n;
}
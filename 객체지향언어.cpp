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
    return true;
}
bool Stack::pop(int &n){
    if(tos==0) //하고 나서 tos--하고 뽑기 때문에. 밑에 코드를 살펴보면 알 수 있음.
        return false;
    tos--;
    n=p[tos];
    return true;
}
int main()
{
    Stack s;
    int n;
    for(int i=0;i<10;i++){
        if(s.push(i)==1)
            cout<<"성공"<<endl;
        else
            cout<<"full 실패"<<endl;
    }
    for(int i=10;i>=0;i--){
        if(s.pop(n)==1)
            cout<<"성공 "<<n<<endl;
        else
            cout<<"empty 실패"<<endl;
    }   
}
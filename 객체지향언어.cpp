#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Stack{
    int *p=NULL;
    int tos=0;
    int size=0;
public:
    Stack(int size){
        p=new int [size];
        if(!p){
            cout<<"동적 할당 실패"<<endl;
            exit(0);
        }
        this->size=size;
    }//
    ~Stack(){
        if(p!=NULL)
            delete[]p;
    }
    bool push(int n); //성공하면 true, 실패하면 false
    bool pop(int &n);

    Stack(const Stack& src); //복사 생성자 / 원본을 훼손하지 않는다는 조건의 const
};
Stack::Stack(const Stack& src){ //컴파일러가 만들어지는 생성자
    this->p = src.p;
    this->tos=src.tos;
    size=src.size;
    //얕은 복사 코드
}
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
    n=p[tos]; //p[tos]
    return true;
}
int main()
{
    Stack s(50);
    
    s.push(10);
    s.push(20);
    int n;
    s.pop(n);

    Stack b=s; //소멸을 할 때 배열에 대해서 2번을 소멸시킴
    b.pop(n);
    cout<<n<<endl;
}
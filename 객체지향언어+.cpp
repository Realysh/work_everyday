#include <iostream>
using namespace std;


//이 함수 하나를 여러 곳에 적용할 수 있음.
template <class T> //template 함수
T biggest(T a[],int size){ //a는 generic인 t type임
    T big=a[0];
    for(int i=0;i<size;i++){
        if(big<a[i])
            big=a[i];
    }
    return big;
}
int main(){
    int x[]={1,10,100,5,4};
    cout<<biggest(x,5)<<endl; //5는 배열 크기, 100이 출력됨.

    double d[]={1.5,10.5,100.6,5.7,4.2,200.8,195.7};
    cout<<biggest(d,7)<<endl;

    string s[]={"hello","good","computer"};
    cout<<biggest(s,3)<<endl;
}
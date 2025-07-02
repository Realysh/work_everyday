#include <iostream>
using namespace std;
//------------- #ifndef ADD_H---------
//프로토타입 선언, 선언부만 먼저 알려주는 것
int add(int x[],int size);
int add(int x[],int size,int *y);

int main(){
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};    
    int c=add(a,5);
    int d=add(a,5,b);
    cout<<c<<endl;
    cout<<d<<endl;
}
int add(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int add(int x[],int size,int *y=NULL){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=x[i];
    }
    if(y==NULL) return sum;
    for(int i=0;i<size;i++){
        sum=sum+y[i];
    }
    return sum;
}
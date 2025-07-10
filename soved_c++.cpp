#include<iostream>
using namespace std;
int main(){
    int count=0;
    char c; //읽은 문자만 return 해주게 됨.
    while(true){
        cin.get(c);
        if(cin.eof()) //c를 만나면
            break;
        else if(c==' ')
            count++;
        else if(c=='\n')
            break;
    }
    cout<<count<<endl;
}

void f(){
    int c; //char 잡으면 안 됨.
    int count=0;
    while((c=cin.get())!=EOF){
        if(c=='a')
            count++;
        else if(c=='\n')
            break;
    }
    cout<<count<<endl;
}
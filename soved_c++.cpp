#include <iostream>
#include <string>
using namespace std; //이름 뭔지 모르는 것 만나면 std안에서 먼저 찾아봐라.
//이를 통해서 연산자가 제정의됨. in special lib

void decide_winner(string s,string t){
    if(s=="가위"){
        if(t=="가위") cout<<"비겼습니다"<<endl;
        else if(t=="바위") cout<<"줄리엣 승."<<endl;
        else cout<<"로미오 승"<<endl;
    }
    else if(s=="바위"){
        if(t=="가위") cout<<"로미오 승"<<endl;
        else if(t=="바위") cout<<"비겼습니다."<<endl;
        else cout<<"줄리엣 승"<<endl;
    }
    else if(s=="보"){
                if(t=="가위") cout<<"줄리엣 승"<<endl;
        else if(t=="바위") cout<<"로미오 승"<<endl;
        else cout<<"비겼습니다"<<endl;
    }
    else{
        cout<<"오류 출력\n";
    }
}

int main(){
    
    while(true){ //사용 목적에 맞게 사용하라, true라고 해야지
        cout<<"로미오>>";
        string s;
        cin>>s;

        cout<<"줄리엣>>";
        string t;
        cin>>t;

        decide_winner(s,t);

        string res;
        cout<<"계속, yes>>";
        cin>>res;
        if(res!="yes")
            break;
    }
    //주체는 로미오
    return 0;   
}
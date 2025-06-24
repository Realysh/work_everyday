#include <iostream>
#include <string>

using std::cout; //define랑 같은 개념이네, cout이라고 된 것들은 다 std::임.
using namespace std; //이름 뭔지 모르는 것 만나면 std안에서 먼저 찾아봐라.
int main(){ 
    string password;

    while(true){
        cout<<"암호 입력:";
        getline(cin,password);//암호 입력
        if(password == "C++"){ //입력 문자와 진짜 암호 비교
            cout<<"성공";
            break;
        }
        else{
            cout<<"암호가 틀렸습니다.\n";
            //아니면 다시 while반복
        }
    }
    
    

    return 0;
}
#include <iostream>
#include <cstring>

using std::cout; //define랑 같은 개념이네, cout이라고 된 것들은 다 std::임.
using namespace std; //이름 뭔지 모르는 것 만나면 std안에서 먼저 찾아봐라.
int main(){ 
    char pw[11];
    while(true){
        cout << "암호>>";
        cin>>pw;
        
        if(strcmp(pw,"C++")==0){//서로 값이 같으면?
            cout<<"성공! 프로그램을 종료합니다.";
            break;
        }
        else{
            cout<<"실패\n";
        }
    }
    return 0;
}
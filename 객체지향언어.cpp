#include <iostream>
#include <string>
// #include <algorithm>
// #include <cctype>
#include <random>
using namespace std;

int main(){
    srand((unsigned)time(0));
    string input;
    cout<<"한 줄 입력"<<endl;
    while(true){
        cout<<">>";
        getline(cin,input);
        
        //exit()이면 탈출
        if(input == "exit")
            break;
        //랜덤 위치 결정
        int length = input.size();
        int index = rand()%length;

        //랜덤 문자 생성
        int n = rand()%26;
        char c = 'a' + n;

        //변경 -> random한 글자와 기존 index글자가 같다면 -> 대문자
        if(input.at(index)==c)
            input.at(index)='A'+n;
        else
            input.at(index)=c;
        //변경
        input.at(index) = c;
        cout<<input<<endl;
    }
    return 0;
}
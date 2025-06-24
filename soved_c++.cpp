#include <iostream>
#include <cstring>

using std::cout; //define랑 같은 개념이네, cout이라고 된 것들은 다 std::임.
using namespace std; //이름 뭔지 모르는 것 만나면 std안에서 먼저 찾아봐라.
int main(){ 
   cout<<"이름을 입력>>";
    char name[11];
    cin >> name; //cin <- 이놈을 그냥 바구니라고 생각하자.
    //사이즈 넘어가면 안 뽑힘.
    //cin >> "마 이 클" 이런 식으로 하면
    //버퍼에는 "이 클"남고 "마"만 cin으로 들어감.
    cout<<"이름은"<<name<<"입니다.\n";

    char firstname[11];
    cin >> firstname;
    cout<< "성은"<<firstname<<"입니다";
    return 0;
}
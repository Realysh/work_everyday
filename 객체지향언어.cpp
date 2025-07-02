#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Random{
    Random(){}
public:
    static void seed(){srand((unsigned)time(0));} //씨드 설정
    static int nextInt(int min=0,int max=32767); //min과 max 사이의 랜덤 정수 리턴
    static char nextAlphabet(); //랜덤 알파벳 문자 리턴
    static double nextDouble(); //0보다 크거나 같고 1보다 적은 랜던 실수 리턴
};

int Random::nextInt(int min,int max){
    int w = max-min;
    int n= rand()%w+min;
    return n;
}
char Random::nextAlphabet(){
    char c;
    int rn=rand()%26;
    int i=rand()%2;
    if(i==0) //소문자
        c=rn+'a';
    else //대문자
        c=rn+'A';
    return c;
}

double Random::nextDouble(){
    double d=(double)rand();
    d=d/RAND_MAX;
    return d;
}

int main(){
    // Random r;
    Random::seed(); //class 자체를 호출, 객체를 호출하는 것이 아니라.
    cout<<"1에서 100까지 랜덤한 정수 10개 출력"<<endl;
    for(int i=0;i<10;i++){
        int n=Random::nextInt(50,100);
        cout<<n<<' ';
    }
    cout<<endl<<endl;

    cout<<"알파벳을 랜덤하게 10개 출력"<<endl;
    for(int i=0;i<10;i++){
        char c=Random::nextAlphabet();
        cout<<c<<' ';
    }
    cout<<endl<<endl;
    
    cout<<"랜덤한 실수 10개 출력"<<endl;
    for(int i=0;i<10;i++){
        double d=Random::nextDouble();
        cout<<d<<' ';
    }
    cout<<endl;
}
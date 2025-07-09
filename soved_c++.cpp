#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    int price, pages;
public:
    Book(string title="",int price=0,int pages=0){
        this->title=title; this->price=price;this->pages=pages;
    }
    void show(){
        cout<<title<<' '<<price<<"원 "<<pages<<"페이지 "<<endl;
    }
    friend Book& operator +=(Book& b,int price);
    friend Book& operator -=(Book& b,int price);  
    friend bool operator ==(Book op1,int price);
    friend bool operator ==(Book op1,const string title);
    friend bool operator ==(Book op1,Book op2);
};
Book &operator +=(Book& b,int price){ //Book이라는 객체의 공간에 b를 대입한 것이다.-> 참조 리턴
    b.price+=price;
    return b;   
}
Book& operator -=(Book& b,int price){
    b.price-=price;
    return b;
}  
bool operator ==(Book op1,int price){
    if(op1.price==price)
        return true;
    else return false;
}

bool operator ==(Book op1,const string title){
    if(op1.title==title) return true;
    else return false;
}

bool operator ==(Book op1,Book op2){
    if(op1.price==op2.price) return true;
    else return false;
}
int main() {
    Book a("명품c++",30000,500),b("미래",30000,500);
    // a+=500;//책 가격 증가
    // b-=500;//책 가격 감소
    a.show();
    b.show();

    if(a==30000) cout<<"정가 30000원"<<endl;
    if(a=="명품 c++")cout<<"명품 c++ 입니다."<<endl;
    if(a==b) cout<<"두 책이 같은 책입니다."<<endl;
}
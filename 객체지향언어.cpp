#include <iostream>
#include <string>
using namespace std;


class Matrix{
    int data[2][2];
public:
    Matrix();
    Matrix(int a,int b,int c,int d);
    Matrix operator+(Matrix b);
    Matrix& operator+=(Matrix b); //참조에 의한 연산으로 그 자체를 바꿔야 하기 때문에 a=a+b ->
    bool operator==(Matrix b);
    void show();
};

bool Matrix::operator==(Matrix b){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(data[i][j]!=b.data[i][j])
                return false;
        }
    }
    return true;
}
Matrix& Matrix::operator+=(Matrix b){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            data[i][j] +=b.data[i][j];  
            }
        }
    return *this;
}
Matrix::Matrix(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            data[i][j]=0;
        }
    }
}

Matrix::Matrix(int a,int b,int c,int d){
    data[0][0]=a;
    data[0][1]=b;
    data[1][0]=c;
    data[1][1]=d;
}

Matrix Matrix::operator + (Matrix b){
    Matrix tmp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            tmp.data[i][j]=data[i][j]+b.data[i][j];
        }
    }
    return tmp;
}

void Matrix::show(){
    cout<<"Matrix = { ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<data[i][j]<<' ';
        }
    }
    cout<<'}'<<endl;
}
int main(){
   Matrix a(1,2,3,4),b(2,3,4,5),c;
    c=a+b; //연산에 대한 의미를 새 생ㅓ할 수 있음. 연산자 중복(다형성) : 같은 표현이라도 객체에 따라서 다양한 형태를 가질 수 있음
    //a.+(b)
    a.show();b.show();c.show();

    //왜 이렇게 되는지에 대해서 고민을 해야함.
    //위와 같은 과정이 lib에 저장되어 있어서 되는 거임.
    string x="abc";
    string y;
    //숫자는 더하기인
    y=x+"de";
    cout<<y;

    (a+=b)+=Matrix(10,10,10,10);
    a.show();b.show();c.show();
    // a.+=(b) 기존 a에 b의 객체를 가진 것으로  a가 초기화 됨.

    if(a==c) //a.==(c)
        cout<<"같다."<<endl;
    else
        cout<<"다르다."<<endl;
    c=a+2;
    c.show();
    //이것도 lib에 만들어져 있음.
}
#include <iostream>
#include <string>
using namespace std;


class Matrix{
    int data[2][2];
public:
    Matrix();
    Matrix(int a,int b,int c,int d);
    //Matrix operator+(Matrix b);
    friend Matrix operator + (Matrix a,Matrix);
    //Matrix& operator+=(Matrix b); //참조에 의한 연산으로 그 자체를 바꿔야 하기 때문에 a=a+b ->
    friend Matrix& operator+=(Matrix& a,Matrix b);
    //bool operator==(Matrix b);
    friend bool operator==(Matrix a,Matrix b);
    void show();
};

Matrix operator + (Matrix a,Matrix b){ 
    Matrix tmp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            tmp.data[i][j]=a.data[i][j]+b.data[i][j];
        }
    }
    return tmp;
}

bool operator==(Matrix a,Matrix b){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(a.data[i][j]!=b.data[i][j])
                return false;
        }
    }
    return true;
}

// bool Matrix::operator==(Matrix b){
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             if(data[i][j]!=b.data[i][j])
//                 return false;
//         }
//     }
//     return true;
// }

Matrix& operator +=(Matrix& a,Matrix b){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a.data[i][j]=a.data[i][j]+b.data[i][j];
        }
    }
    return a;
}
// Matrix& Matrix::operator+=(Matrix b){//a가 바뀌어야 되기 때문에 촘조의 형태르 들어옴. 
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             data[i][j] +=b.data[i][j];  
//             }
//         }
//     return *this;
// }
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
    c=a+b;//a.+(b) -> a.+(a,b);?
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
   
    //이것도 lib에 만들어져 있음.
}
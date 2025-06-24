#include <stdio.h>

void f();//cpu는 main()함수만 호출이 가능함

int x=1;//전역변수

int main(){
    int a=10;
    {
        int a=20;
        int b = 30;
        printf("%d\n",a);
    }
    printf("%d\n",a);
    printf("%d\n",x);
    printf("%d\n",b); //블럭 외에서 b가 생성되었기 때문에 해당사항 없음. 지역변수임.
    f();//호출
    return 0;
}

void f(){
    int a = 5;
    {
        int x = 110;
        printf("%d %d\n",a,x);
    }
}
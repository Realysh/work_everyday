#include <stdio.h>
//구조체 선언과 메모리 요청
typedef struct{
    int no;
    double height;
}student;
int main(){
    student stu;
    stu.no = 100;
    stu.height=178.5;

    printf("%d: \t",stu.no);
    printf("%5.1f\n",stu.height);

    //구조체와 포인터 변수
    student *s=&stu;
    printf("%d: \t",s->no);
    printf("%5.1f \n",s->height);
    return 0;
}
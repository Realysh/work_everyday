#include <stdio.h>
#define maxStackSize 5 //좌측 변수 내지 상수가 우측의 의미이다.

typedef int element;
typedef struct{
    int top;
    int data[maxStackSize];
}Stack;

void init_stack(Stack *p){
    p->top=-1;
}
void push(element item,Stack *p){
    if(p->top==4){
        printf("메모리 꽉 참\n");
        return;
    }
    p->data[++p->top]=item;
}

int pop(Stack *s){
    return s->data[s->top--];
}

void display(Stack *p){
    int i;
    for(i=0;i<=(p->top);i++){
        printf("%d ",p->data[i]);
    }
    printf("\n");
}

int main(){
    Stack s; //스택 선언
    init_stack(&s);
    //스택에 데이터 입력 함수 : push
    push(10,&s);
    display(&s);
    push(20,&s);
    display(&s);
    push(30,&s);
    display(&s);

    printf("pop실행값 = %d\n",pop(&s));
    display(&s);
    printf("pop실행값 = %d\n",pop(&s));
    display(&s);
    printf("pop실행값 = %d\n",pop(&s));
    display(&s);
    return 0;
}
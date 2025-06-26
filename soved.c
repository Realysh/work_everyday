#include <stdio.h>
#define maxStackSize 100000 //좌측 변수 내지 상수가 우측의 의미이다.

typedef int element;
typedef struct{
    int top;
    int data[maxStackSize];
}Stack;

void init_stack(Stack *p){
    p->top=-1;
}
void push(element item,Stack *p){
    p->data[++p->top]=item;
}

int pop(Stack *s){
    return s->data[s->top--];
}

int sum(Stack *p){
    int i;
    int sum=0;
    for(i=0;i<=p->top;i++){
        sum+=p->data[i];
    }
    return sum;
}

int main(){
    Stack s; //스택 선언
    init_stack(&s);
    
    int t,input;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&input);
        if(!input)
            pop(&s);
        else
            push(input,&s);
    }
    printf("%d",sum(&s));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxStackSize 100 //좌측 변수 내지 상수가 우측의 의미이다.

typedef char element;
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

int check_matching(const char *in){
    Stack s;
    char ch,open_ch;
    int i,n=strlen(in); //n=문자열의 길이
    init_stack(&s); //스택의 초기화
    for(i=0;i<n;i++){
        ch=in[i];
        switch(ch){
            case'(':case'{':case'[':
                push(ch,&s);
                break;
            case')':case'}':case']':
                if(s.top==-1) return 0;
                else{
                    open_ch=(pop(&s));
                    if((open_ch=='('&&ch!=')')||
                    (open_ch)=='{'&&ch!='}'||
                    (open_ch)=='['&&ch!=']')
                    return 0;
                }
                break;
        }
    }
    if(s.top!=-1) return 0;
    return 1;
}
int main(){
    char *p="{A[(i+1)]=0;}";
    if(check_matching(p)==1)
        printf("%s 괄호 검사 성공\n",p);
    else
        printf("%s 괄호검사 실패\n",p);
    return 0;
}
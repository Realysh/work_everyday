#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;
typedef struct{
    short r;
    short c;
}element;
typedef struct{
    short r;
    short c;
}element;

void init_stack(element *p){
    p->top=-1;
}
int is_empty(element *p){
    return (p->top==-1);
}
int is_full(element *p){
    return (p->top==(MaxStackSize-1));
}
void push(element item,element *p){
    if(is_full(&p)){
        fprintf(stderr,"스택 포화 에러\n");
        return;
    }
    p->data[++p->top]=item;
}

element pop(element *p){
    if(is_empty(&p)){
        fprintf(stderr,"스택 공백 에러\n");
        exit(1);
    }
    else return p->data[(p->top)--];
}
element peek(element *p){
    if(is_empty(&p)){
        fprintf(stderr,"스택 공백 에러\n");
        exit(1);
    }
    else return p->data[p->top];
}

int main(){

    return 0;
}
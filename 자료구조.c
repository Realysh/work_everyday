#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct StackNode{
    element data;
    struct StackNode *link;
}StackNode;


typedef struct{
    StackNode* top;
}LinkedStackType;

void init(LinkedStackType *s){
    s->top=NULL;
}

void push(LinkedStackType *s,element item){
    StackNode *temp=(StackNode*)malloc(sizeof(StackNode));
    temp->data=item;
    temp->link=s->top;
    s->top=temp;
}
int is_empty(LinkedStackType *s){
    return (s->top==NULL);
}
element pop_value(LinkedStackType *s){
    //under flow check 필요
    if(is_empty(s)){
        fprintf(stderr,"Node is empty\n");
        exit(1);
    }
    StackNode *temp = s->top;
    element data = s->top->data;
    temp=s->top;
    s->top=s->top->link; //temp->link;
    free(temp);
    return data;
}

void print_stack(LinkedStackType *s){
    printf("현재 연결 리스트\n");
    StackNode *p=s->top;
    while(p!=NULL){
        printf("%d -> ",p->data);
        p=p->link;
    }
    printf("NULL\n");
}
int main(){
    LinkedStackType s;
    init(&s);

    int x,y,data;
    while(x!=1||x!=0){
        printf("push(0) or pop(1):");
        scanf("%d",&x);
    
        if(x==0){
            printf("data를 입력하세요");
            scanf("%d",&y);
            push(&s,y);
            print_stack(&s);
        }
        else if(x==1){
            data=pop_value(&s);
            printf("value : %d\n",data);
            print_stack(&s);
        }
    }
}
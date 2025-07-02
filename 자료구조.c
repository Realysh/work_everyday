#include <stdio.h>
#include <stdlib.h>
#define mqs 20
typedef int element;
typedef struct{
    int front;
    int rear;
    element data[mqs];
}Que;
int is_empty(Que *q){
    return q->rear+1==q->front;
}
element print_que(Que *q){
    if(is_empty(q)){
        printf("오류:큐 빔");
        exit(1);
    }
    element t=q->data[q->front];
    q->front = q->
}
void initQue(Que *q){
    q->front=q->rear=0;
}
int is_full(Que *q){
    return (q->rear+1)%mqs == q->front;
}
void enqueue(Que *q,element item){
    if(is_full(q)){
        printf("full\n");
        return;
    }
    q->rear = (q->rear+1)%mqs;
    q->data[q->rear]=item;
}

element deque(Que *q){
    if(is_empty(q)){
        printf("큐 공백\n");
        exit(1);
    }
    q->front = (q->front+1)%mqs;
    return q->data[q->front];
}

int main(){
    Que q;
    int n;
    initQue(&q);

    while(!is_full(&q)){
        printf("정수 입력:");
        scanf("%d",&n);
        enqueue(&q,n);
        print_que(&q);
    }
    printf
    return 0;
}
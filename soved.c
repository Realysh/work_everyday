#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;
typedef struct QueNode{
    int capacity;
    element *data;
    int front,rear;
}QueNode;

void init(QueNode *q,int size){
    q->capacity=0;
    q->data=(element*)malloc(size*sizeof(element));
    q->front=q->rear=0;
}

void push(QueNode *q,element item){
    q->capacity++;
    q->data[(q->rear)++]=item;
}

int pop(QueNode *q){
    if (q->capacity == 0)
        return -1;
    int item = q->data[q->front++];
    q->capacity--;
    return item;
}

int size(QueNode *q){
    return q->capacity;
}

int empty(QueNode *q){
    if(q->capacity==0)
        return 1;
    else
        return 0;
}

int front(QueNode *q){
    if(q->capacity==0)
        return -1;
    else
        return (q->data[q->front]);
}

int back(QueNode *q){
    if(q->capacity==0)
        return -1;
    else
        return (q->data[(q->rear)-1]);
}
int main(void){

    QueNode q;
    int t,x,item;
    char menu[6];
    scanf("%d",&t);
    
    init(&q,t);
    while(t--){
        scanf("%s",menu);
        if(!strcmp("push",menu)){
            scanf("%d",&item);
            push(&q,item);
        }
        else if(!strcmp("pop",menu)){
            printf("%d\n",pop(&q));
        }
        else if(!strcmp("size",menu)){
            printf("%d\n",size(&q));
        }
        else if(!strcmp("empty",menu)){
            printf("%d\n",empty(&q));
        }
        else if(!strcmp("front",menu)){
            printf("%d\n",front(&q));
        }
        else if(!strcmp("back",menu)){
            printf("%d\n",back(&q));
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
    int data;
    struct ListNode *link; //순차적으로 실행하는데 마지막에 List라고 읽는 것을 모르니까 위에 선언된 것으로만 해석해야함.
}ListNode;

ListNode *insert_first(ListNode *head,element value){
    ListNode *p=(ListNode *)malloc(sizeof(ListNode));
    p->data = value;
    p->link = head;
    head=p;
    return head;
}

ListNode * delete_first(ListNode *head){
    ListNode* removed=head;
    if(head==NULL)
        return NULL;
    head=head->link; //removed->link
    free(removed);
    return head;
}
void printList(ListNode* head){
    for(ListNode *p=head;p!=NULL;p=p->link){
        printf("%d->",p->data);
    }
    printf("null\n");
}
ListNode* search(ListNode *head,element item){
    ListNode *p=head;
    while(p!=NULL){
        if(p->data==item)
            return p;
        p=p->link;
    }
    return NULL;
}
int main(){
    ListNode *head=NULL; //사실상 헤드는 최신 노드의 
    
    head = insert_first(head,10);printList(head);
    head = insert_first(head,20);printList(head);
    head = insert_first(head,30);printList(head);
    head=search(head,20);
    printf("%d\n",head->link->data);
    for(int i=0;i<3;i++){
        head=delete_first(head);
        printList(head);
    }
    return 0;
}
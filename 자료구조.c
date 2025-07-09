#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char element[100]; //이건 한 번 봐야함.
typedef struct DListNode{ //이중연결 노드타입.
    element data;
    struct DListNode *llink;
    struct DListNode *rlink;
}DListNode;

DListNode* current;

void init(DListNode* head){
    head->llink = head->rlink=head;
    // head->rlink = head;
}

void dinsert(DListNode* before,const element data){ //안전성을 위해서 -> ㅅ
    DListNode *newnode=(DListNode *)malloc(sizeof(DListNode));
    strcpy(newnode->data,data);
    newnode->llink=before;
    newnode->rlink=before->rlink;
    before->rlink->llink=newnode;
    before->rlink=newnode; //순서가 바뀐다고 하면 newnode가 이중연결 리스트의 조건에 부합하지 않음.
}

void ddelete(DListNode* head,DListNode* removed){ //이 head의 동적할당을 하기 위하여 main에서 head에게 동적할당을 한 건가?
    if(removed==head) return;
    removed->llink->rlink=removed->rlink;
    removed->rlink->llink=removed->llink;
    free(removed);
}

void print_Dlist(DListNode* head){
    DListNode *p;
    for(p=head->rlink;p!=head;p->rlink){
        if(p==current)
            printf("<-| #%s# |-> ",p->data);
        else
            printf("<-| %s |->",p->data);
    }
    printf("\n");
}

int main(){
    char ch;
    DListNode *head=(DListNode*)malloc(sizeof(DListNode));
    init(head);
    printf("추가단계\n");
    
    dinsert(head,"mamamia");
    dinsert(head,"Dancing Queen");
    dinsert(head,"Fernando");
    
    current = head->rlink;
    print_Dlist(head);

    do{
        printf("\n명령어를 입력하시오(<,>,q) : ");
        ch=getchar();
        if(ch=='<'){
            current=current->llink;
            if(current==head){
                current=current->llink;
            }
        }
        else if(ch=='>'){
            current = current->rlink;
            if(current==head)
                current=current->rlink;
        }
        print_Dlist(head);
        getchar();
    }while(ch!='q');
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 200
typedef struct{
    int key;
} element;

typedef struct{
    element heap[MAX_ELEMENT];
    int heap_size;
}HeapType;

//생성함수
HeapType* create(){
    HeapType* h = (HeapType*)malloc(sizeof(HeapType));
    if (h != NULL) {
        h->heap_size = 0;
    }
    return h;
}

//초기화 함수
void init(HeapType* h){
    h->heap_size = 0;
}
// 현재 요소의 개수가 heap_size인 히프 h에 item을 삽입한다.
// 삽입 함수

void insert_max_heap(HeapType* h, element item)
{
	int i;
	i = ++(h->heap_size);
	//  트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
	while ((i != 1) && (item.key > h->heap[i / 2].key)) { //item이 자기 부모보다 크다고 한다면 
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;     // 새로운 노드를 삽입
}
element delete_max_heap(HeapType* h){
    element item,temp;
    item = h->heap[1];
    int parent,child; //idx 번호?
    //힙 재구성 : 마지막 노드를 처음으로
    temp=h->heap[h->heap_size--]; //마지막 데이터 구성
    parent=1;
    child=2;

    while(child <= h->heap_size){
        if((child < h->heap_size) &&
            h->heap[child].key < h->heap[child+1].key)
            child++;
        if(temp.key >=h->heap[child].key) break;

        h->heap[parent]=h->heap[child];
        parent=child;
        child*=2;
    }
    //막내가 부모보다 더 클때
    h->heap[parent]=temp;
    return item;
}
void heap_sort(element a[],int n){
    HeapType* h; //사실상 전역적으로 사용됨.
    h=create(); init(h);

    for(int i=0;i<n;i++){
        insert_max_heap(h,a[i]);
    }
    for(int i=n-1;i>=0;i--){
        a[i] = delete_max_heap(h);
    }
    free(h);
}
int main(){
    element list[]={23,56,11,9,56,99,27,34};
    int SIZE=8;
    
    heap_sort(list,SIZE);
    
    for(int i=0;i<SIZE;i++){
        printf("%d\t",list[i]);
    }
    return 0;
}
#include <stdio.h>

int main(){
    // int a = 10;
    // int *p = &a; //주소를 저장하는 변수 : 포인터 변수 / 그 외는 : 그냥 변수
    // printf("%u\n",&a);
    // printf("%u\n",p);

    // printf("%d\n",a);
    // printf("%d\n",*p);

    //배열과 포인터 변수
    int arr[3]={10,20,30};
    int *p=arr; //&arr[0]
    printf("%d, %d\n",arr[0],*p);
    printf("%d, %d\n",arr[1],*(p+1));
    printf("%d, %d\n",arr[2],*(p+2));

    for(int i=0;i<3;i++){
        printf("%d %d\n",arr[i],*(p+i));
    }
    
    
    return 0;
}
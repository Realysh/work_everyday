#include <stdio.h>

int main(){
    int t,i,j,tmp;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++){
        for(j=0;j<t-1;j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for(i=0;i<t;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
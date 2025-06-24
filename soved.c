#include <stdio.h>
#include <string.h>
int main(){
    int t,i,j,k;
    char tmp[50];
    scanf("%d",&t);
    char arr[t][50];

    for(i=0;i<t;i++){
        scanf("%s",arr[i]);
    }
    
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            if(strcmp(arr[i],arr[j])==0){
                for(k=j;k<t-1;k++){
                    if(k==t-1)
                        arr[k][0]='\0';
                    else
                        strcpy(arr[k],arr[k+1]);
                }
            }
        }
    }
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            if(strlen(arr[i])<strlen(arr[j])){
                strcpy(tmp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], tmp);
            }
            if(strlen(arr[i])==strlen(arr[i+1])&&strcmp(arr[i],arr[i+1])<0&&i<(t-1)){
                strcpy(tmp, arr[i]);
                strcpy(arr[i], arr[i+1]);
                strcpy(arr[i+1], tmp);
            }
        }
    }

    for(i=0;i<t;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}
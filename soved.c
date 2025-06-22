#include <stdio.h>
#include <string.h>
int main(){
    char ip[1000002];
    fgets(ip,1000002,stdin);
    char *p=strchr(ip,'\n');
    *p='\0';
    int i,num=0;
    for(i=0;ip[i]!='\0' && i<1000002;i++){
        if(i==0&&ip[i]==' '){
            i++;
        }
        if(ip[i]!=' '){
            num++;
            while(ip[i]!=' '){
                i++;
            }
        }
    }
    printf("%d",num);
    return 0;
}
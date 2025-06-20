#include <stdio.h>
#include <string.h>
int main(){
    int t;
    char last;
    char input[1000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",input);
        printf("%c",input[0]);
        last=strlen(input);
        printf("%c\n",input[last-1]);
    }
    return 0;
}
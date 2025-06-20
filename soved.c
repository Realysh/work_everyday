#include <stdio.h>
#include <string.h>
int main(){
    int t,n,c,a;
    float g,sum;

    scanf("%d",&t);
    while(t--){
        sum=0;
        a=0;
        scanf("%d",&n);
        while(n--){
            scanf("%d%f",&c,&g);
            sum+=c*g;
            a+=c;
        }
        printf("%d %.1f\n",a,sum/a);
    }
    return 0;
}
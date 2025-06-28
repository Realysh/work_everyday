#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    int t,h,w,n;
    int i,j,floor,unit;
    cin>>t;
    while(t--){
        cin>>h>>w>>n;
        for(i=1;i<=w;i++){
            for(j=1;j<=h;j++){
                n--;
                if(n==0){
                    floor=j;
                    unit=i;
                    break;
                }
            }
            if(n==0) break;
        }
        printf("%d%02d\n",floor,unit);
    }
    return 0;
}
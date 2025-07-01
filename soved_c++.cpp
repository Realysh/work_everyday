#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    double sum=0;
    cin>>t;
    double s[t];
    for(int i=0;i<t;i++){
        cin>>s[i];
    }

    int m=*max_element(s,s+t);
    for(int i=0;i<t;i++){
        s[i]=s[i]/m*100;
        sum+=s[i];
    }
    printf("%lf",sum/t);
}
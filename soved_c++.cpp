#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    int len=a.size();
    int i,count=0;

    for(i=0;i<len;i++){
        if(a[i]==' '||a[i]=='0')
            continue;
        else{
            if(a[i]=='-'){
                i++;
                while(isdigit(a[i])) i++;
            }
            else{
                count++;
                while(isdigit(a[i])) i++;
            }
        }
    }
    cout<<count;
    return 0;
}
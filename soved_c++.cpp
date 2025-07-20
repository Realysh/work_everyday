#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t,count=0;
    cin>>t;
    while(t--){
        string s;
        bool hasDuplicate = false;
        cin>>s;
        for (int i = 0; i < s.size() && !hasDuplicate; ++i) {
            char c = s[i];
            for (int j = i + 1; j < s.size(); ++j) {
                if (c == s[j]) {
                    hasDuplicate = true;
                    break;
                }
            }
        }
        if (!hasDuplicate) {
            count++;
        }
    }
    cout<<count;
}
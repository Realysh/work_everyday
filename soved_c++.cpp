#include <iostream>
using namespace std;

string plsum(string& a,string& b){
    string r="";
    if(a[0]=='-'){
        a.erase(0,1);
        b.erase(0,1);
        while(a.size()>b.size()) b='0'+b;
        while(b.size()>a.size()) a='0'+a;
        int carry=0;
        for(int i=a.length()-1;i>=0;i--){ //
            int dignum=(a[i]-'0')+(b[i]-'0')+carry;
            r=char((dignum%10)+'0')+r;
            carry=dignum/10;
        }
    }
    else{
        while(a.size()>b.size()) b='0'+b;
        while(b.size()>a.size()) a='0'+a;
        int carry=0;
        for(int i=a.length()-1;i>=0;i--){ //
            int dignum=(a[i]-'0')+(b[i]-'0')+carry;
            r=char((dignum%10)+'0')+r;
            carry=dignum/10;
        }
    }
    while (r.length() > 1 && r[0] == '0') r.erase(0, 1);
    return r;
}  

int biggerAbs(string& a, string& b){ //a>0, b<0
    int x=-1;//동일한 수라고 가정
    b.erase(0,1);
    while(a.size()>b.size()) b='0'+b;
    while(b.size()>a.size()) a='0'+a;
    for(int i=0;i<a.length();i++){
        if(a[i]>b[i]){ //+
            x=1;
            break;
        }
        else if(a[i]<b[i]){ //-
            x=0;
            break;
        }
        else continue;
    }
    return x;
}

string mnsum(string& a,string& b,int sym){ //a>0, b<0
    string r="";
    int carry=0;
    for(int i=a.length()-1;i>=0;i--){ //
        int dignum=(a[i]-'0') - (b[i]-'0') - carry;
        if(dignum < 0){
            dignum += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        r = char(dignum + '0') + r;
    }
    while(r.length() > 1 && r[0] == '0') r.erase(0,1);
    return r;
}

int main(){
    int t,sym;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        //1.a>0, b>0
        if(a[0]!='-'&&b[0]!='-')
            cout<<plsum(a,b);
        //2. a>0, b<0
        else if(a[0]!='-'&&b[0]=='-'){
            sym=biggerAbs(a,b);
            {
                string result = mnsum(a, b, sym);
                if (sym == 0) cout << '-' << result;
                else cout << result;
            }
        }
        //3. a<0, b>0
        else if(a[0]=='-'&&b[0]!='-'){
            sym=biggerAbs(b,a);
            {
                string result = mnsum(b, a, sym);
                if (sym == 0) cout << '-' << result;
                else cout << result;
            }
        }
        //4. a<0, b<0
        else
            cout<<'-'<<plsum(a,b);
    }
}
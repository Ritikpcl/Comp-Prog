#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    string s; 
    cin>>s;
    int q=-2;
    for (int i=0;i<s.size();i++){
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        if (s[i]>='5'){
            q=i;
            break;
        }
    }
    char four = '4', nine = '9';
    while (q>=0 && s[q]>=four){
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        q--;
    }
    if (q==-2){
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        cout<<s<<endl;
    }
    else if (q==-1||(q==0&&s[0]==nine)){
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        string p="1";
        for (auto t: s){
            
            p+='0';
        }
        cout<<p<<endl;
    }
    else{
        s[q]+=1;
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        for (int i=q+1;i<s.size();i++){
            s[i]='0';
            for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        }
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        cout<<s<<endl;
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    string s;
    cin>>s;
    ll n = s.length();

    if(s == ")("){
        cout<<"YES"<<endl;
        cout<<"(())"<<endl;
        return;
    }

    string sample = "";
    for(ll i=0; i<n; i++){
        if(i&1) sample += ')';
        else sample += '(';
    }

    if(s == sample) cout<<"NO"<<endl;
    else{
       for(ll i=0; i<n; i++){
        if(n&1){
            if(i&1) sample += '(';
            else sample += ')';
        }else{
            if(i&1) sample += ')';
            else sample += '(';
        }
            
        }
        cout<<"YES"<<endl;
        cout<<sample<<endl;
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
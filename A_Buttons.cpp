#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll s = a + b + c;
    if(c&1){
        if(a >= b) cout<<"First";
        else cout << "Second";
    } else{
        if(a > b) cout<<"First";
        else cout<< "Second";
    }
    cout<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
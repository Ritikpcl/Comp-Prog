#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll a,b,h;
    cin>>a>>b>>h;
    ll s = b+h;
    if(a <= s) cout<<2*a-1<<endl;
    else cout<<2*s+1<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// a = 4, s = 2;
// ababa

// a = 3, b = 3
// ababa
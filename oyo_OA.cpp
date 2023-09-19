#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;

    ll cnt = 0, k = n;
    while(k){
        k = k >> 1;
        cnt++;
    }

    ll x = (1 << (cnt-1))
    ll ans = n*(n+1)/2 - x;

    cout<<ans<<endl;
}


int main(){
        solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    ll s1 = 0, s2 = 0, maxi = LONG_LONG_MIN;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        maxi = max(maxi,x);
        if(x>0){
            if(i&1) s1 += x;
            else s2 += x;
        }
    }
    
    ll ans = max(s1,s2);
    if(ans == 0) cout<<maxi<<endl;
    else cout<<ans<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
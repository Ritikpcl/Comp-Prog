#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll xr=0;
    for(ll i=0; i<n; i++){
        xr = xr^v[i];
    }

    ll ans = 0;
    for(ll i=0; i<n; i++){
        ans = ans^(v[i]^xr);
    }

    if(!ans) cout<<xr<<endl;
    else cout<<-1<<endl;
} 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    ll ans = 0;
    for(ll i=1; i<n; i++){
        ll a = v[i] - v[i-1] - 1;
        ll b = v[i-1] - (ceil(v[i-1]/2.0));
        ans += min(a,b);
    }

    cout<<ans<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
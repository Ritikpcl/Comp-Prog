#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ans = 0;
    for(ll i=1; i<n; i++){
        if(v[i] < v[i-1]){
            ans += max((ll)0, v[i-1] - ans);
            // v[i] -= max((ll)0, v[i] - ans);
        }
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
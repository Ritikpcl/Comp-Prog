#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

bool static comp(pair<ll,ll>& a, pair<ll,ll>& b){
    return a.first < b.first;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v1(n),v2(n);
    for(ll i=0; i<n; i++) cin>>v1[i];
    for(ll i=0; i<n; i++) cin>>v2[i];
    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++) v[i] = {v1[i],i};
    sort(v.begin(), v.end(), comp);
    sort(v2.begin(),v2.end());
    
    vector<ll> ans(n);
    for(ll i=0; i<n; i++){
        ans[v[i].second] = v2[i];
    }

    for(ll i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
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
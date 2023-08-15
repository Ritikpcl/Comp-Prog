#include <bits/stdc++.h>
using namespace std;
#define ll long long int


static bool comp(pair<ll,ll>& a, pair<ll,ll>& b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x >= k) x = x%k+k;
        v[i] = {x,i};
    }

    sort(v.begin(),v.end(),comp);
    for(auto i: v) cout<<i.second+1<<" ";
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
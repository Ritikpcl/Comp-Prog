#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

static bool comp(ll& a, ll& b){
    return a > b;
}

void solve(){
    ll n;
    cin>>n;
    map<ll,vector<ll>>mp;
    vector<ll> v1(n);
    vector<ll> v2(n);

    for(ll i=1; i<=n; i++){
        ll x,y;
        cin>>x>>y;
        mp[x].push_back(y);
    }

    for(ll i=1; i<=n; i++) sort(mp[i].begin(),mp[i].end(),comp);
    
    ll ans = 0;
    ll i=1;
    while(i<=n){
        ll j=0;
        while(j<i && j<mp[i].size()){
            ans += mp[i][j];
            j++;
        }
        i++;
    }
    cout<<ans<<endl;
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



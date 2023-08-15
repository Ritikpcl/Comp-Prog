#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    unordered_map<ll,ll> mp;
    bool flag = false;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        mp[x]++;
        if(mp[x] > n/2){
            flag = true;
        }
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
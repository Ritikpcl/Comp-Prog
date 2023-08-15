#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    ll x = n;
    vector<ll> v(m);
    vector<ll> ans(n+1,-1);
    unordered_map<ll,ll> mp;
    for(ll i=0; i<m; i++) cin>>v[i];
    ll time = 1;
    for(ll i=0; i<m; i++){
        if(mp[v[i]] == 0){
            if(x>0) ans[x] = time;
            mp[v[i]] = 1;
            x--;
        }
        time++; 
    }

    for(ll i=1; i<=n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}
return 0;
}
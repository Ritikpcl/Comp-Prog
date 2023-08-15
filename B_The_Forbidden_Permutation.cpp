#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll> p(n);
    vector<ll> v(m);
    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        cin>>p[i];
        mp[p[i]] = i;
    }
    
    for(ll i=0; i<m; i++) cin>>v[i];

    ll ans = 0;
    for(ll i=m; i>0; i--){
        ll a = mp[v[i-1]];
        ll b = mp[v[i]];
        if(a < b && a+d >= b){
            if(d+1 >= n || b-a < (a+d-b+1)){
                mp[v[i-1]] = mp[v[i]];
                ans += b-a;
            }
            else{
                mp[v[i]] = a+d+1;
                ans += a+d-b+1;
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}
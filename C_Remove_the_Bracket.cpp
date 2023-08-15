#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(vector<ll>& v, ll s, ll i, ll x, ll sum, ll& ans){
    
    if(i == v.size()-1){
        sum += x*v[v.size()-1];
        ans = max(ans,sum);
        return;
    }

    if(v[i]>s){
        ll z = v[i]/2;
        solve(v,s,i+1,z, sum+x*(v[i]-z),ans);
        solve(v,s,i+1,v[i]-z,sum+x*(z),ans);
    } else{
        solve(v,s,i+1,0,sum*v[i],ans);
        solve(v,s,i+1,v[i],sum,ans);
    }
}


int main()
{
ll t;
cin>>t;
while(t--){
    ll n,s;
    cin>>n>>s;
    vector<ll> v(n);
    ll ans = 0;
    for(ll i=0; i<n; i++) cin>>v[i];
    solve(v,s,1,v[0],0,ans);
    cout<<ans<<endl;
}
return 0;
}
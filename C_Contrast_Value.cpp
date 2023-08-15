#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<ll> ans;
    for(ll i=0; i<n-1; i++){
        ll d = v[i]-v[i+1];
        if(d == 0) continue;
        if(ans.size()){
            ll x = ans.back();
            if(x>0 ^ d>0) ans.push_back(d);
        }else ans.push_back(d);
    }
    cout<<ans.size()+1<<endl;
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    unordered_map<ll,ll> mp;
    sort(v.begin(),v.end());
    for(ll i=0; i<n; i++) mp[v[i]]++;
    for(ll i=n-1; i>=0; i--){
        if(v[i] >= 1 && mp[v[i]] > mp[v[i]-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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
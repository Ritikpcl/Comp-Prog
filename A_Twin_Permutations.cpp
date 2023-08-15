#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    ll maxi = INT_MIN;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        maxi = max(maxi,v[i]);
    }
    for(ll i = n-1; i>=0; i--){
        v[i] = maxi+1-v[i];
    }
    for(auto i: v) cout<<i<<" ";
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
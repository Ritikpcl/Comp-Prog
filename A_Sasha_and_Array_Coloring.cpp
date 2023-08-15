#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll i=0, j = n-1;
    ll s = 0;
    while(i<j){
        s += v[j--] - v[i++];
    }
    cout<<s<<endl;
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
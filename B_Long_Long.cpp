#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll op = 0;
    ll s = 0;
    ll i = 0;
    while(i<n){
        if(v[i] < 0){
            op++;
            while(i<n && v[i] <= 0) s += -1*(v[i++]);
        }
        if(i<n) s += v[i++];
    }
    cout<<s<<" "<<op<<endl;
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
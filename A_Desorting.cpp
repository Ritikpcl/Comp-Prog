#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n),temp;
    for(ll i=0; i<n; i++) cin>>v[i];
    temp = v;
    sort(temp.begin(),temp.end());
    if(temp != v){
        cout<<0<<endl;
        return;
    }

    ll d = INT_MAX;
    for(int i=1; i<n; i++){
        d = min(d,v[i]-v[i-1]);
    }

    cout<<d/2+1<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
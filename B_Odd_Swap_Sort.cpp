#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<ll> v1, v2;
    for(ll i=0; i<n; i++) {
        ll x;
        cin>>x;
        if(x&1) v1.push_back(x);
        else v2.push_back(x);
    }

    for(ll i=1; i<v1.size(); i++){
        if(v1[i-1] > v1[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    for(ll i=1; i<v2.size(); i++){
        if(v2[i-1] > v2[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
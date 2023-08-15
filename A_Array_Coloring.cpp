#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum = 0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }

    if(sum % 2 != 0) {
        cout<<"NO"<<endl;
        return;
    }else {
        cout<<"YES"<<endl;
        return;
    }
    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
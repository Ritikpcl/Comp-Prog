#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    ll idx = -1;
    for(ll i=n-2; i>=0; i--){
        if(v[i] != v[i+1]){
            idx = i;
            break;
        }
    }

    if(idx == -1) {
        cout<<-1<<endl;
        return;
    }else{
        cout<<idx+1<<" "<<n-idx-1<<endl;
        for(ll i=0; i<=idx; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(ll i = idx+1; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
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
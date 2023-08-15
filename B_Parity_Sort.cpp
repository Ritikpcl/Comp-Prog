#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v1,v2,v(n),ans(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x&1) v2.push_back(x);
        else v1.push_back(x);
        v[i] = x;
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    ll k1 = 0, k2 = 0;
    for(ll i=0; i<n; i++){
        if(v[i]&1){
            ans[i] = v2[k2++];
        }else{
            ans[i] = v1[k1++];
        }
    }

    for(ll i=1; i<n; i++){
        if(ans[i-1] > ans[i]) {
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
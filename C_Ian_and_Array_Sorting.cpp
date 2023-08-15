#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }

    bool ans = true;
    for(ll i=n-1; i>0; i -= 2){
        if(v[i] < v[i-1]){
            if(i == 1){
                ans = false;
            }else{
                v[i-2] -= (v[i-1]-v[i]);
            }
        }else{
            if(i >= 2){
                v[i-2] += (v[i]-v[i-1]);
            }
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
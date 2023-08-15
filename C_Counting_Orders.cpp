#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
ll mod = 1e9+7;
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0; i<n; i++) cin>>a[i]; 
    for(ll i=0; i<n; i++) cin>>b[i];
    sort(a.begin(),a.end()); 
    sort(b.begin(),b.end());
    if(a[0]<b[0] || a[n-1]<b[n-1]) {
        cout<<0<<endl;
        return;
    }

    ll ans = 1, prev = 0;
    for(ll i=0; i<n; i++){
        ll idx = lower_bound(b.begin(),b.end(),a[i])-b.begin();
        ans = ((ans%mod)*((idx-i)%mod))%mod;
    }
    cout<<ans<<endl;
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
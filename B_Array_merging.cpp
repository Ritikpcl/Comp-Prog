#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];
    ll cnt=1;
    unordered_map<ll,ll> mp1,mp2;
    mp1[a[0]]=1;
    mp2[b[0]]=1;
    for(int i=1; i<n; i++){
        if(a[i-1] == a[i]){
            cnt++;
        }else cnt=1;
        mp1[a[i]] = max(mp1[a[i]],cnt);
    }

    cnt=1;
    for(int i=1; i<n; i++){
        if(b[i-1] == b[i]){
            cnt++;
        }else cnt=1;
        mp2[b[i]] = max(mp2[b[i]],cnt);
    }   

    ll ans=1;
    for(auto i: mp1){
        ans = max(ans,i.second+mp2[i.first]);
    }

    for(auto i: mp2) ans=max(ans,i.second);

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
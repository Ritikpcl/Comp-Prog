#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(vector<ll>& arr, ll k, ll n){
    ll count = 0;
    for (ll i = 0; i < n; ++i){
        if (arr[i] <= k)
            ++count;
    }
    
    ll bad = 0;
    for (ll i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;

    ll ans = bad;
    for (ll i = 0, j = count; j < n; ++i, ++j) {
         
       
        if (arr[i] > k)
            --bad;
         
    
        if (arr[j] > k)
            ++bad;

        ans = min(ans, bad);
    }
    return ans;
    
}

void solve(){
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll k;
    cin>>k;

    map<ll,vector<ll>> mp;
    for(ll i=0; i<n; i++){
        mp[v[i]].push_back(i);
    }

    ll ans = 1e9;
    for(auto itr: mp){
        ll size = itr.second.size();
        if(size >= k){
            ll x = fun(itr.second,k,size);
            ans = min(ans,x);
        }
    }
    cout<<ans<<endl;

}


int main(){
    // ll t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}
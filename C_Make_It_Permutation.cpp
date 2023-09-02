#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n,c,d;
    cin>>n>>c>>d;
    vector<ll> arr(n), v, insertCost(n);
    
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    
    // removing duplicates
    ll duplicates = 0;
    v.push_back(arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i-1] == arr[i]) duplicates++;
        else v.push_back(arr[i]);
    }

    // calculate insertion cost upto each index
    ll rCost = duplicates*c, x = 1, iCost = 0;
    n = v.size();
    for(ll i=0; i<n; i++){
        if(x != v[i]){
            ll diff = v[i] - x;
            iCost += diff*d;
            x = v[i];
        }
        insertCost[i] = iCost + rCost;
        x++;
    }
    
    // comparing insertion cost and removing cost
    ll ans = insertCost[n-1], k = c;
    for(ll i=n-1; i>0; i--){
        ans = min(ans,c+insertCost[i-1]);   
        c += k;
    }

    ans = min(ans, (ll)arr.size() * k + d);
    cout<<ans<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    
    vector<ll> prefixSum(n, v[0]);
    vector<ll> postfixSum(n, v[n-1]);

    for(ll i=1; i<n; i++){
        prefixSum[i] = v[i] + prefixSum[i-1];
        postfixSum[n-i-1] = v[n-i-1] + postfixSum[n-i];
    }

    ll ans = LONG_LONG_MAX;
    for(ll i=1; i<k; i++) 
        ans = min(ans, prefixSum[2*(k-i)-1] + postfixSum[n-i]);

    ans = min({ans, prefixSum[2*k-1], postfixSum[n-k]});
    cout<<prefixSum[n-1] - ans<<endl;
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
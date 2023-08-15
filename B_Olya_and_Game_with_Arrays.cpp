#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v(n);

    ll mini = INT_MAX;
    ll mini_ans = INT_MAX;
    ll idx = -1;
    for(ll i=0; i<n; i++){
        ll m;
        cin>>m;
        for(ll j=0; j<m; j++){
            ll x;
            cin>>x;
            v[i].push_back(x);
        }
        sort(v[i].begin(), v[i].end());
        if(mini > v[i][1]){
            mini = v[i][1];
            idx = i;
        }
        mini_ans = min(mini_ans, v[i][0]);
    }

    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(i == idx){
            ans += mini_ans;
        }else ans += v[i][1];
    }

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
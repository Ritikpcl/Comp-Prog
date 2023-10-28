#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void initCode() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}


void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++) {
        ll x,y;
        cin>>x>>y;
        v[i] = {x,y};
    }

    for(ll i=1; i<n; i++){
        if(v[i].first >= v[0].first && v[i].second >= v[0].second){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<v[0].first<<endl;
}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
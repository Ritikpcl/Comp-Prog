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
    for(ll i=1; i<=n; i++){
        ll x = 8*(i-1)*(i-2);
        ll sq = i*i;
        ll y = sq*(sq-1) - x;
        cout<<y/2<<endl;
    }
}


int main(){
    initCode();
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n,m,k,H;
    cin>>n>>m>>k>>H;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    for(ll i=0; i<n; i++) {
        for (ll j = 1; j <= m; j++) {
            if (j*k != abs(h[i] - H)) {
                continue;
            }

            conversations++;
        }
    }

        cout << conversations << endl;
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
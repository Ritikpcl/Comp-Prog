#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll k = 0;
    ll x = v[k];
    for (ll i = 1; i < n; i++) x = x & v[i];
    if (x != 0) cout << 1 << endl;
    else
    {
        ll res = 0;
        ll z = v[k];
        ll j = 1;
        while(j<=n){
            z = z & v[j - 1];
            if (z == 0){
                res++;
                if (j != n) z = v[j];
            }
            j++;
        }
        cout<<res<<endl;
    }
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

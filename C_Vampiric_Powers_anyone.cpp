#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    ll z = 2;
    vector<ll> v(n+z,0);
    for (int i=1; i <= n; i++) cin >> v[i];

    z = 0;
    ll sol = z;

    z++;
    while(z <= n){
        sol = max(sol, v[z]);
        z++;
    }

    z = 1;
    ll x = 256;
    while(z <= n){
        ll res = v[z];
        for (ll i = z + 1; i <= min(n,z + x); i++){
            res = res ^ v[i];
            sol = max(sol, res);
        }
        z++;
    }
    cout << sol << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

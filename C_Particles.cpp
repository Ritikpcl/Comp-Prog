#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll maxi(ll x, ll y)
{
    if (x > y)
        return x;
    else
        return y;
}

void solve()
{

    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) cin >> v[i];
    ll z=0, e=z, o=z;
    
    ll t = 2;
    for (int i=0; i<n; i++){
        if (i%t == 0)
            e = e + maxi(0ll, v[i]);
        else
            o = o + maxi(0ll, v[i]);
    }

    ll res = maxi(e, o);

    if (res == z)
    {
        sort(v.begin(), v.end());
        res = v[n - 1];
    }
    cout << res << endl;
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
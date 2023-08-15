#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    vector<ll> t = v;
    sort(t.begin(), t.end());
    ll mex = 0;

    for (ll i = 0; i < n; i++)
    {
        if (t[i] == mex)
            mex++;
        else if (t[i] > mex)
            break;
    }

    bool flag = false;
    int l = 0, h = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == mex + 1)
        {
            if (flag)
            {
                h = i;
            }
            else
            {
                l = i;
                h = i;
                flag = true;
            }
        }
    }

    if (flag)
    {
        while (l <= h)
            v[l] = mex, l++;
        sort(v.begin(), v.end());
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            if (x < v[i] && v[i] < mex)
            {
                cout << "NO" << endl;
                return;
            }
            else if (x == v[i])
                x++;
        }

        if (x != mex + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
    {
        if (v.size() <= mex)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
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
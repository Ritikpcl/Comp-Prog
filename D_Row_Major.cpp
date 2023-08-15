#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

set<ll> getFt(ll n) {
    set<ll> ft;
    for (ll i = 1; i*i <= n; i++) {
        if (n%i == 0) {
            ft.insert(i);
            ft.insert(n/i);
        }
    }
    return ft;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<vector<ll>> yt(n, vector<ll>(26));
    set<ll> ft = getFt(n);
    string ans;

    ll i = 0;
    while(i<n){
        for (ll ftr : ft) {
            if (i + ftr >= n) break;
            yt[i + ftr][v[i]] = 1;
        }

        ll z = 26;
        if (i+1 < n) {
            for (ll j = 0; j < z; j++) {
                if (yt[i + 1][j] == 0) {
                    v[i + 1] = j;
                    break;
                }
                
            }
        }
        i++;
    }

    ll m = 97;
    for (ll i : v) {
        ans += i + m;
    }

    cout << ans << endl;
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



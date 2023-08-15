#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll sum = 0;
    ll x, y, z;

    vector<ll> v(10, 1);
    for (int i = 2; i <= 7; i++) {
        v[i] = v[i - 1] * 10;
    }

    bool ans = false;

    for (int i = v[a]; i < v[a + 1]; i++) {
        ll mini = v[c];
        ll maxi = v[c + 1] - 1;

        maxi -= i;
        mini -= i;

        mini = max(mini, v[b]);
        maxi = min(maxi, v[b + 1] - 1);

        if (maxi < mini) {
            continue;
        }

        ll len = maxi - mini + 1;

        if (sum < k && sum + len >= k) {
            ans = true;
            x = i;
            y = mini + (k - sum) - 1;
            z = x + y;
        }

        sum += len;
    }

    if (ans) {
        cout << x << " + " << y << " = " << z << endl;
    } else {
        cout << -1 << std::endl;
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
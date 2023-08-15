#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve() {
    ll n;
    cin >> n;
    vector<ll> x(n);
    ll i = 0;
    while (i < n) {
        cin>>x[i];
        i++;
    }

    if(!x[n - 1]){
        cout<<"YES"<<endl;
        ll i = n - 1;
        while (i >= 0) {
            ll j = i;
            ll l = 0;
            ll z = 0;
            while (j >= 0 && l <= x[j]) {
                z += x[j];
                l = x[j];
                j--;
            }
            ll u = j + 1;
            while (u < i) {
                cout<<"0 ";
                u++;
            }
            cout<<z<< " ";
            i = j;
        }
        cout << endl;
    } else {
        cout<<"NO"<< endl;
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
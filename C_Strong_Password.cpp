#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    string str1, str2, str3;
    cin >> str1;
    ll m;
    cin >> m;
    cin >> str2>> str3;

    vector<multiset<ll>> ms(100);
    for (ll i = 0; i < str1.length(); i++) ms[str1[i] - '0'].insert(i);
    

    ll a = INT_MIN;
    ll i = 0;
    while(i < m)
    {
        ll b = INT_MIN;
        ll x = str2[i];
        ll y = str3[i];
        while (x <= y)
        {
            auto l = ms[x - '0'].upper_bound(a);
            if (l == ms[x - '0'].end()) {cout << "YES" << endl;return;}
            b = max(b, *l);
            x++;
        }
        a = max(a, b);
        i++;
    }
    cout << "NO" << endl;
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
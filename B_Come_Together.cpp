#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    ll x = 1;
    ll res = x;

    if ((x2 > x1 && x3 > x1) || (x2 < x1 && x3 < x1)) res = res + min( abs(x3 - x1),abs(x2 - x1));
    if ((y2 > y1 && y3 > y1) || (y2 < y1 && y3 < y1)) res = res + min( abs(y3 - y1),abs(y2 - y1));

    cout << res << endl;
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
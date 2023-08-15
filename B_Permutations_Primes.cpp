#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){

    ll n;
    cin >> n;
    vector<ll> v(n,0);
    ll k = 0, l = n-1, m = n/2, o = 4;
    v[k] = 2;v[l] = 3;v[m] = 1;

    ll z = o;
    ll i = 1;
    for(;i<l;i++){
        if( i == m) continue;
        v[i] = z++;
    }

    for(int i= 0; i<n; i++) cout<<v[i]<<' ';
    cout << endl;
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
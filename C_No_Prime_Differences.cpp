#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,m;
    cin>>n>>m;
    ll d = n%2 && n>1 ? (n-1) : n;
    vector<vector<ll>> v(n, vector<ll>(m+1,0));
    for(ll i=0; i<n; i++) v[i][0] = -d+i+1;

    for(ll i=1; i<=m; i++){
        for(ll j=0; j<n; j++){
            v[j][i] = v[j][i-1] + d;
        }
    }
 
    if(n%2 && n>1){
        for(ll i=1; i<=m; i++) v[n-1][i] = v[n-2][i]+1;
    }

    for(ll i=0; i<n; i++){
        for(ll j=1; j<=m; j++) cout<<v[i][j]<<" ";
        cout<<endl;
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
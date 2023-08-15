#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> v(n,vector<ll>(n,0));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(v[i][j] != v[n-i-1][n-j-1]){
                v[i][j] = v[n-i-1][n-j-1];
                ans++;
            }
        }
    }
    
    if(k>=ans && ((k-ans)%2==0 || n%2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
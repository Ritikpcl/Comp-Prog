#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v(2, vector<ll>(n,0));
    ll x = 2*n-1;
    ll y = n-1;

    for(ll i=0; i<2; i++){
        for(ll j=0; j<n; j++){
            if(j%2==0){
                v[i][j]=x;
                x-=2;
            }else{
                v[i][j]=y;
                y-=2;
            }
        }
        x = n;
        y = 2*n-2;
    }

    v[1][n-1] = 2*n;
    for(ll i=0; i<2; i++){
        for(ll j=0; j<n; j++) cout<<v[i][j]<<" ";
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
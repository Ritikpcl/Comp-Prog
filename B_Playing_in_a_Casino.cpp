#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> arr(n, vector<ll> (m,0));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    vector<vector<ll>> v(m, vector<ll>(n,0));
    for(ll i=0; i<m; i++){
        for(ll j=0; j<n; j++){
            v[i][j]=arr[j][i];
        }
        sort(v[i].begin(),v[i].end());
    }

    ll ans = 0;
    for(ll i=0; i<m; i++){
        ll sum = 0;
        for(ll j=0; j<n; j++){
            sum += (j*v[i][j]) - (n-1-j)*v[i][j] ;
        }
        ans += sum;
    }

    cout<<ans<<endl;
}
return 0;
}
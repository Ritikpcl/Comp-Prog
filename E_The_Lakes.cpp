#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll solve(vector<vector<ll>>& v, vector<vector<ll>>& visit, ll i, ll j){
    if(i >= v.size() || j >= v[0].size() || i<0 || j<0 || visit[i][j] != 0 || v[i][j] == 0) return 0;

    visit[i][j]=1;
    return v[i][j] + solve(v,visit,i,j+1) + solve(v,visit,i,j-1) 
                   + solve(v,visit,i-1,j) + solve(v,visit,i+1,j);
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n, vector<ll>(m,0));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++) cin>>v[i][j];
    }

    vector<vector<ll>> visit(n, vector<ll> (m,0));

    ll ans = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(visit[i][j] == 0 && v[i][j] > 0){
                ans = max(ans, solve(v,visit,i,j));
            }
        }
    }
    cout<<ans<<endl;
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
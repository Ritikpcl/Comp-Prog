#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll dfs(vector<vector<ll>>& v, vector<ll>& arr, ll p, ll x){

    ll s = 0;
    bool flag = true;
    for(ll i=0; i<v[x].size(); i++){
        if(v[x][i] != p)
        {
            flag = false;
            s += dfs(v,arr,x,v[x][i]);
        }
    }
    if(flag) s++;
    arr[x] = s;
    return  s;
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v(n+1);
    for(ll i=0; i<n-1; i++) {
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    vector<pair<ll,ll>> q;
    ll m;
    cin>>m;
    for(ll i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        q.push_back({a,b});
    }

    vector<ll> arr(n+1,1);
    dfs(v,arr,0,1);

    for(ll i=0; i<m; i++){
        cout<<arr[q[i].first]*arr[q[i].second]<<endl;
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
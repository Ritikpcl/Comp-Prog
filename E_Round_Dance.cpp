#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

bool dfs(vector<vector<ll>>& adj, int p, int x, vector<ll>& visit){
    visit[x] = 1;
    bool flag = false;
    for(ll i=0; i<adj[x].size(); i++){
        if(adj[x][i] == p) flag = true;
        if(visit[adj[x][i]] == 0) flag = flag || dfs(adj,x,adj[x][i],visit);
    }
    return flag;
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> adj(n+1);
    for(ll i=1; i<=n; i++){
        ll x;
        cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }

    vector<ll> visit(n+1,0);
    ll cnt = 0, mini = 0;
    for(ll i=1; i<=n; i++){
        if(visit[i] == 0){
            cnt++;
            if(dfs(adj,0,i,visit)) mini++;
        }
    }
    cout<<min(mini,cnt)<<" "<<cnt<<endl;
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

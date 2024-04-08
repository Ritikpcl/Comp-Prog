#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void initCode() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}


/**
    4->5->6
    4->7->5
   0->1->2->3->4->0
*/

bool dfs(vector<vector<int>>& adj, vector<int>& visit, int x){
    
    visit[x] = 1;
    bool ans = false;
    for(int i=0; i<adj[x].size() && !ans; i++){
        int y = adj[x][i];
        if(visit[y] != -1) return true;
        ans = ans || dfs(adj,visit,adj[x][i]);
    }

    visit[x] = -1;
    return ans;
}


bool solve(){
    
    int n = 4;               // 0    1    2    3    4
    vector<vector<int>> adj = {{1}, {2}, {3}, {4}, {0}};

    vector<int> visit(n+1,-1);

    return dfs(adj,visit,0);
}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        cout<< solve();
    }
    return 0;
}
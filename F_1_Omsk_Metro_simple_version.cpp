#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void dfs(vector<vector<ll>>& v, unordered_map<ll,ll>& mp1, unordered_map<ll,pair<ll,ll>>& mp2, ll x, ll s, ll mini, ll maxi){
    s += mp1[x];
    mini = min({mini,s,mp1[x]});
    maxi = max({maxi,s,mp1[x]});
    mp2[x] = {mini,maxi};
    for(ll i=0; i<v[x].size(); i++){
        dfs(v,mp1,mp2,v[x][i],s,mini,maxi);
    }
    s -= mp1[x];
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v(n);
    vector<vector<ll>> q;
    unordered_map<ll,ll> mp1;
    unordered_map<ll,pair<ll,ll>> mp2;
    ll k = 1;
    mp1[1] = 1;
    for(ll i=0; i<n; i++){
        char c;
        cin>>c;
        if(c == '+'){
            ll a,b;
            cin>>a>>b;
            v[a].push_back(++k);
            mp1[k] = b;
        }else{
            ll a,b,c;
            cin>>a>>b>>c;
            q.push_back({a,b,c});
        }
    }

    
    ll s =0, mini = INT_MAX, maxi = INT_MIN;
    for(ll i=k; i>0; i--){
        dfs(v,mp1,mp2,k,s,mini,maxi);
    }
    
    cout<<mp2[1].first<<" "<<mp2[1].second<<endl;
    for(ll i=0; i<q.size(); i++){
        ll a = q[i][0];
        ll b = q[i][1];
        ll c = q[i][2];
        if(c == 0) {cout<<"YES"<<endl; continue;}
        bool f = mp2[b].first <= c && mp2[b].second >= c;
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

static bool comp(vector<ll>& a, vector<ll>& b){
    if(a[0] == b[0]) return a[1] < b[1];
    return a[0] < b[0];
}

void solve(){
    ll n;
    cin>>n;
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    vector<vector<ll>> v(n, vector<ll>(3,0));
    for(ll i=0; i<n; i++) cin>>v[i][2];
    for(ll i=0; i<n; i++) cin>>v[i][0];
    for(ll i=0; i<n; i++) cin>>v[i][1];

    sort(v.begin(), v.end(), comp);

    ll sum = 0, ans = 0;
    for(ll i=0; i<n; i++){
        while(pq.size() && pq.top().first < v[i][0]){
            sum -= pq.top().second;
            pq.pop();
        }
        sum += v[i][2];
        ans = max(ans,sum);
        pq.push({v[i][1],v[i][2]});
    }
    cout<<ans<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
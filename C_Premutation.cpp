#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

static bool comp(pair<int,int>& a, pair<int,int>& b){
    return a.first < b.first;
} 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<pair<int,int>> ans(n+1);
    for(int i=1; i<=n; i++) ans[i] = {0,i};

    for(ll i=1; i<=n; i++){
        for(int j=1; j<=n-1; j++){
            ll x;
            cin>>x;
            ans[x].first += j;
            ans[x].second = x;
        }
    }
    sort(ans.begin(), ans.end(), comp);
    for(int i=1; i<=n; i++) cout<<ans[i].second<<" ";
    cout<<endl;
}
return 0;
}
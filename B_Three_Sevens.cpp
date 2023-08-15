#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll m;
    cin>>m;
    vector<vector<ll>> v(m);
    for(ll i=0; i<m; i++){
        ll n;
        cin>>n;
        for(ll j=0; j<n; j++){
            ll x;
            cin>>x;
            v[i].push_back(x);
        }
    }

    unordered_map<ll,ll> mp;
    vector<ll> ans;
    bool flag = true;
    bool np = false;
    for(ll i=m-1; i>=0; i--){
        ll cnt = v[i].size();
        bool chk = true;
        for(ll j=v[i].size()-1; j>=0; j--){
            if(mp[v[i][j]] == 0){
                if(chk) ans.push_back(v[i][j]);
                mp[v[i][j]]=1;
                chk = false;
            }  
        }

        if(chk){
            np=true;
            break;
        }
    }

    if(np) cout<<-1<<endl;
    else{
        reverse(ans.begin(),ans.end());

        for(ll i=0; i<m; i++) cout<<ans[i]<<" ";
        cout<<endl;
    }

}
return 0;
}
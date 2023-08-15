#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> ans;
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    for(ll i=0; i<n; i++){
        ll idx;
        if(ans.size()) idx = upper_bound(ans.begin(), ans.end(), v[i]-1)-ans.begin();
        if(ans.size() && ans[idx-1] == v[i]-1) ans[idx-1] = v[i];
        else ans.push_back(v[i]);
    }

    cout<<ans.size()<<endl;
        
}
return 0;
}
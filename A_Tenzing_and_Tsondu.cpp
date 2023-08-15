#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v1(n),v2(m);
    for(ll i=0; i<n; i++) cin>>v1[i];
    for(ll i=0; i<m; i++) cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    ll i1 = 0, j1 = n-1, i2 = 0, j2 = m-1;
    bool flag = true;
    while( j1>=i1 && j2>=i2){
        if(flag){
            ll x = v1[j1];
            v1[j1] -= v2[i2];
            v2[i2] -= x;
            if(v2[i2] <= 0) i2++;
            if(v1[j1] <= 0) j1--;
        }else{
            ll x = v2[j2];
            v2[j2] -= v1[i1];
            v1[i1] -= x;
            if(v1[i1] <= 0) i1++;
            if(v2[j2] <= 0) j2--;
        }
        flag = !flag;
        
    }

    if(j1 < i1 && j2 < i2) cout<<"Draw"<<endl;
    else if(j2 < i2) cout<<"Tsondu"<<endl;
    else cout<<"Tenzing"<<endl;

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
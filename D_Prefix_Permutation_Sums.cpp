#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    ll m = n-1;
    vector<ll> v(m), diff, miss;
    for(ll i=0; i<m; i++) cin>>v[i];
    for(ll i=1; i<m; i++) diff.push_back(v[i]-v[i-1]);

    if(n == 2){
        if(v[0] != 1 && v[0] != 2){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
        return;
    }

    sort(diff.begin(), diff.end());

    ll x = 1, k = 0;
    while(x <= n){
        if(k >= m-1 || x != diff[k]){
            miss.push_back(x);
        }else k++;
        x++;
    }

    string ans = "&&&";
    ll sz = miss.size();
    ll total_sum = n*(n+1)/2;
    if(total_sum == v[m-1]){
        if(diff[0] == 1){
            ll s = miss[sz-1] + miss[sz-2];
            if(s != diff[m-2]) ans = "NO";
            else ans = "YES";
        }else{
            ll s = miss[0] + miss[1];
            if(s != v[0]) ans = "NO";
            else ans = "YES";
        }
    }else{
        if( total_sum != v[m-1] + miss[sz-1]) ans = "NO";
        else ans = "YES";
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n; 
    cin>>n;
    unordered_map<ll,ll>op;
    vector<vector<ll>> xbb;
    vector<ll>xb((n*(n-1))/2),res;
    for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
    for (ll i=0;i<(n*(n-1))/2;i++) cin>>xb[i];
    for (ll i=0;i<(n*(n-1))/2;i++) op[xb[i]]++;
    for (auto it: op) xbb.push_back({it.first,it.second});
    for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
    sort(xbb.begin(),xbb.end());

    ll i=1;
    for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
    for (auto re: xbb){
        ll z=0;
        ll b=re[1];
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        ll a=re[0];
        while (b>0){
            b-=n-i;
            i++;
            for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
            z++;
        }
        
        while (z--) res.push_back(a);
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
    }

    ll mx = 1e9;
    while (res.size() != n){
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        res.push_back(mx);
    }

    sort(res.begin(),res.end());
    for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }

    for(ll i=0; i<res.size(); i++) cout<<res[i]<<" ";
    cout<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
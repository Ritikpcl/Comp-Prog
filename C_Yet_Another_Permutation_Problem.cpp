#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin>>n;
    vector<ll> v, visit(n+1);

    v.push_back(1);
    visit[1] = 1;
    ll x = 2;
    while(x <= n){
        ll num = x;
        while(num <= n){
            if(visit[num] == 0){
                v.push_back(num);
                visit[num] = 1;
            }
            num = num*2;
        }
        x++;
    }

    for(ll i=0; i<v.size(); i++) cout<<v[i]<<" ";
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
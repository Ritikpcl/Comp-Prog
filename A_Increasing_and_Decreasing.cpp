#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll x,y,n;
    cin>>x>>y>>n;
    vector<ll> v;
    ll a = 1, k = n-2, z = y;
    while(k-->0){
        if(z-a <= x) {
            cout<<-1<<endl;
            return;
        } 
        v.push_back(z-a);
        z -= a;
        a++;
    }
    if(z-a < x) {
        cout<<-1<<endl;
        return;
    }
    cout<<x<<" ";
    reverse(v.begin(),v.end());
    for(auto i: v) cout<<i<<" ";
    cout<<y<<endl;

}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
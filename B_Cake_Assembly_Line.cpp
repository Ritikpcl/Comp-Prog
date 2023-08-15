#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,w,h;
    cin>>n>>w>>h;
    vector<pair<ll,ll>> cake(n), pipe(n);

    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        ll a = x - w;
        ll b = x + w;
        cake[i] = {a,b};
    }

    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        ll a = x - h;
        ll b = x + h;
        pipe[i] = {a,b};
    }

    sort(cake.begin(),cake.end());
    sort(pipe.begin(),pipe.end());
    
    ll shift = 0;
    for(ll i=0; i<n; i++){
        ll a1 = cake[i].first + shift;
        ll b1 = cake[i].second + shift;
        ll a2 = pipe[i].first;
        ll b2 = pipe[i].second;

        if(b1-a1 < b2-a2){
            cout<<"NO"<<endl;
            return;
        }

        if(b2 > b1) shift += b2-b1;
        if(a2 < a1) shift += a2-a1;
    }

    for(ll i=0; i<n; i++){
        ll a1 = cake[i].first + shift;
        ll b1 = cake[i].second + shift;
        ll a2 = pipe[i].first;
        ll b2 = pipe[i].second;
        if(a1 > a2 || b2 > b1) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
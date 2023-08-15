#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n,k,d,w;
    cin>>n>>k>>d>>w;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll i=0, doses=0;
    while(i<n){
        ll x = k;
        doses++;
        ll exp = v[i]+w+d;
        while(i<n && x && v[i]<=exp){
            i++;
            x--;
        }
    }
    cout<<doses<<endl;
}
return 0;
}
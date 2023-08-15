#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll maxi = INT_MIN, idx=0;
    for(ll i=1; i<n; i++) {
        if(maxi < v[i]){
            maxi = v[i];
            idx = i;
        }
    }

    ll j = idx == n-1 ? idx-1 : idx-2;
    ll i = 0;
    while(j>=i && v[j] > v[i]) j--;
    i = j+1;
    ll idx2 = i;
    j = idx-1; 
    while(j>i) swap(v[i++],v[j--]);

    for(ll i=idx; i<n; i++) cout<<v[i]<<" ";
    for(ll i=idx2; i<idx; i++) cout<<v[i]<<" ";
    for(ll i=0; i<idx2; i++) cout<<v[i]<<" ";
    cout<<endl;
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll even = 0, odd = 0;
    ll minEven = INT_MAX, minOdd = INT_MAX;
    for(ll i=0; i<n; i++) {
        if(v[i]&1){
            odd++;
            minOdd = min(minOdd, v[i]);
        }
        else{
            even++;
            minEven = min(minEven, v[i]);
        }
    }

    if(odd == n || even == n || minEven > minOdd){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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
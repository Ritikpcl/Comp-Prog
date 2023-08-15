#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    bool neg = false;
    ll maxi = LONG_LONG_MIN;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x<0){
            neg = true; 
            ans = x;
        }else{
            maxi = max(maxi,x);
        }
    }
    if(neg){
        cout<<ans<<endl;
        return;
    }
    cout<<maxi<<endl;
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
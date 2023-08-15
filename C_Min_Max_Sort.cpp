#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        mp[x] = i;
    }

    ll ans = 0;
    bool flag = true;

    if(n>1){
        ll i=n/2,j;
        if(n%2){
            j = i+2;
        }else{
            j = i+1;
        }

        while(i>0 && j<=n){
            if(mp[i] > mp[j]){
                if(i == 1) flag = false;
                ans++;
            }
            i--;
            j++;
        }
    }
    ll t = ans && flag || mp[1] != 0? 1 : 0;
    cout<<ans+t<<endl;
}
return 0;
}
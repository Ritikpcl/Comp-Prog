#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n+1);
    for(ll i=1; i<=n; i++) cin>>v[i];

    ll one = 1, two = 1, maxi = 1;
    for(ll i=1; i<=n; i++){
        if(v[i] == 1) one = i;
        if(v[i] == 2) two = i;
        if(v[i] == n) maxi = i;
    }

    ll a=1,b=1;

    if((maxi<one && two<one) || (maxi>one && two>one)){
        if(abs(one-maxi) < abs(one-two)){
            a = one;
            b = two;
        }else{
            a = two;
            b = maxi;
        }
    }else if((maxi<one && two>one) || (maxi>one && two<one)){
        a = one;
        b = maxi;
    }

    cout<<a<<" "<<b<<endl;
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
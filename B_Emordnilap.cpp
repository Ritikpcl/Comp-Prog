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
        ll mod = 1e9+7;
        ll x = ((ll)n%mod*(n-1)%mod)%mod;
        ll fac = 1;
        for(ll i=2; i<=n; i++) fac = (fac*i)%mod;

        cout<<((fac)*(x))%mod<<endl;
    }
    return 0;
}
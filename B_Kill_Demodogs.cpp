#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int power(int x,int n, int m=LLONG_MAX){
    if(x==0) return 0;
    int ans = 1;
    while(n){
        if(n&1) ans = (ans*x)%m;
        x = (x*x)%m;
        n>>=1;
    }
    return ans;
}

void solve(){
        ll mod = 1e9+7;
        ll n;
        cin>>n;
        ll x = n-1;
        ll a = (n%mod *(n+1)%mod *(2*n+1)%mod)%mod * power(6,mod-2,mod);
        ll b = (x%mod *(x+1)%mod *(x+2)%mod)%mod * power(3,mod-2,mod);;
        ll j = (a+b);
        cout<<( (ll)2022%mod * (j%mod) )%mod<<endl;
}
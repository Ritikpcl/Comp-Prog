#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll gcd(ll a, ll b){
    return b ? gcd(b,a%b) : a;
}

ll lm (ll a, ll b){
    return (a/gcd(a,b))*b;
}

int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    
    for(ll i=0; i<n; i++){
        ll x,y;
        cin>>x>>y;
        a[i]=x;
        b[i]=y;
    }
    
    ll ans = 1;
    bool turn = true;
    ll cost = 0;
    for(ll i=1; i<n; i++){
        if(turn){
            ll hcf = gcd(a[i],a[i-1]);
            ll lcm = lm(b[i],b[i-1]);
            ll mul = hcf*lcm;
            if(a[i]%(mul/b[i])==0 && a[i-1]%(mul/b[i-1])==0){
                cost = mul;
                turn = false;  
            }else ans++;
        }else{
            if(cost%b[i]==0 && a[i]%(cost/b[i])==0) continue;
            else{
                turn = true;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}
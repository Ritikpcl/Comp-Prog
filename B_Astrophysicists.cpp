#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,k,g;
    cin>>n>>k>>g;
    ll res;
    if (k*g - (((g+1)/2)-1)*n<0) {
        res = k*g;
    }else{
            ll num = k*g-(((g+1)/2)-1)*n+g-1;
            ll den = g;
            ll q = num/den;
            res = k*g-(q*g);
        }
    cout<<res<<endl;
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
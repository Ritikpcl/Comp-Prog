#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    ll x = n*(n+1)/2-1;
    ll y = x/n + 1;
    cout << y*n - x << " ";
    for(ll i=2; i<=n; i++) cout<<i<<" ";
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
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
    bool ans = false;
    for(ll i=1; i<=n; i++){
        ll x;
        cin>>x;
        if(x<=i) ans = true;
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
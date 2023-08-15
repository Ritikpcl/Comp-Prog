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
    vector<ll> v(n);
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x==1) cnt++;
    }
    cout<<n-(cnt/2)<<endl;
}
return 0;
}
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
    ll zero = 0;
    bool greater_one = false;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x == 0) zero++;
        if(x>1) greater_one = true;
    }

    if(zero <= ceil(n/2.0)) cout<<0<<endl;
    else{
        if(greater_one || zero == n) cout<<1<<endl;
        else cout<<2<<endl;
    }
}
return 0;
}
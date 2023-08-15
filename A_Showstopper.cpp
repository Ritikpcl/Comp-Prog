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
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];
    
    for(ll i=0; i<n; i++) {
        if(a[i] > b[i]) swap(a[i],b[i]);
    }

    bool flag = true;
    ll x = a[n-1];
    ll y = b[n-1];
    for(ll i=0; i<n; i++){
        if(a[i]>x || b[i]>y){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}
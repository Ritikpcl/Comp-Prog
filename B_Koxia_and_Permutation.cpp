#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        ll i=0, x=n,d=1;
        while(i<n){
            ll z = k-1;
            while(i<n && z>0){
                v[i] = x;
                x--;
                i++;
                z--;
            }

            if(i<n){
                v[i] = d;
                i++;
                d++;
            }
        }
    
        for(ll i=0; i<n; i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    
return 0;
}
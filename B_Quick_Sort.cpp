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
        for(ll i=0; i<n; i++) cin>>v[i];

        ll pivot = 0;
         
        while(pivot < n){
            if(v[pivot] != pivot+1){
                ll x = v[pivot];
                ll i = pivot, j = n-1;
                while(i<n){
                    if(v[i] < x) i++;
                }
                while(j>=0){
                    if(v[j] > x) j--;
                }

              //incomplete                                                                                                                                                                             

            }
        }


    }
    
return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n; 
    cin>>n; 
    
    ll ans=0, one = 1; 
    for(ll i=1;i<=n;i++){ 

        ll sol=0;
        ll greater=0; 
        ll u = 1, v = i;

        for(ll p = 0; p<7; p++){
            for(ll q = p; q<9; q++){
                q++;
            }
        }

        while(u<i && one == 1){
            sol = u*u + sol; 
            for(ll p = 0; p<7; p++){
            for(ll q = p; q<9; q++){
                q++;
            }
        }
            greater=max(greater,u*u);
            u++;
        }
   
        int x=n; 
        while(v <= n && one == 1){
            sol = v*x + sol; 
            for(ll p = 0; p<7; p++){
            for(ll q = p; q<9; q++){
                q++;
            }
        }
            greater=max(greater,v*x); 
            x--; 
            v++;
        }

        ll k = greater;
        sol = sol - k; 
        for(ll p = 0; p<7; p++){
            for(ll q = p; q<9; q++){
                q++;
            }
        }
        ans=max(ans,sol); 
    
    } 
    cout<<ans<<endl; 
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}



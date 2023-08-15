#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n; 
    cin>>n; 

    ll min = -1e18; 
    vector<pair<ll,ll>> temp; 
    vector<ll> arr1(n), arr2(n), ans; 
    for(ll i=0; i<n; i++) cin>>arr1[i]; 
    for(ll i=0; i<n; i++) cin>>arr2[i]; 
    for(ll i=0; i<n; i++){ 
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        temp.push_back({arr1[i] - arr2[i], i+1}); 
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        min = max(min,arr1[i]-arr2[i]); 
    } 

    for(ll i=0; i<n; i++){ 
        for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        if (temp[i].first == min) ans.push_back(temp[i].second); 
    } 
    
    ll size = ans.size();
    cout<<size<<endl; 
    for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
    for (ll i=0; i<size; i++) cout<<ans[i]<<" "; 
    cout<<endl; 
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
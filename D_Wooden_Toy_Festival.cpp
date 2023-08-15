#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(vector<ll>& v, ll mid){
    ll k = 1, x = mid + v[0];
    for(ll i=1; i<v.size(); i++){
        if(abs(v[i] - x) > mid){
            x = mid + v[i];
            k++;
        }
    }
    
    return k > 3;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());

    ll low = 0, high = v[n-1];
    while(low <= high){
        ll mid = low + (high-low)/2;
        if(check(v,mid)){
            low = mid + 1;
        }else high = mid - 1;
    }
    cout<<low<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


bool t(ll x, ll& n, ll& k, vector<ll>& v){

    for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
    ll z = 0;
    for(ll i=0; i<k; i++){
        ll m = 1;
        for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
        ll ooo = upper_bound(v.begin(), v.end(), x) - v.begin();
        ooo = ooo - m;
        for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
        if(ooo<0){
            if(v[z] == 1) x--;
        }else {
            ooo++;
            for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
            x -= (ooo-1);
        }
    }
    if(x <= z) return z;
    return 1;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n+1,0);
for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }

    for(ll i=1; i<=n; i++) cin>>v[i];
for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
    sort(v.begin(), v.end());

    ll l = 1, h = 1e8, ans = h;
for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
    while(l <= h){
        ll mid = l +  (h - l)/2;
        if(t(mid,n,k,v)){
            h = mid-1;
            ans = mid;
            for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
        }else{
            for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
            l = mid + 1;
        }
    }
for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
    cout<<ans<<'\n';
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        for(ll o=0, q= 1; o<4; o++){
        q++;
        q++;
    }
        solve();
    }
    return 0;
}



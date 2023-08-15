#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

static bool comp(int& a, int& b) {
    return a>b;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin>>v[i];

        sort(v.begin(), v.end(), comp);

        unordered_map<ll,ll> mp;
        for(ll i=1; i<=m; i++) mp[i] = 1;

        ll lcm=m;
        for(ll i=m-1; i>0; i--){
            if(lcm%i) lcm *= i;
        }

        vector<ll> ans;
        for(ll i=0; i<n; i++){
            ll hcf;
            do{
                ll a = lcm;
                ll b = v[i];
                hcf = gcd(a,b);
                mp[hcf] = 1;
                a = v[i];
                b = hcf;
            }while(mp[hcf] == 0);
            ans.push_back(v[i]);
        }

    }
    return 0;
}
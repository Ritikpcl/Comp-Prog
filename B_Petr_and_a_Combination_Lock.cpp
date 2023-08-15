#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll dp[16][2*180*16];
bool solve(vector<ll>& v, ll i, ll sum){

    if(i<0){
        if(sum % 360 == 0) return true;
        else return false;
    }

    if(dp[i][180*16 + sum] != -1) return dp[i][180*16 + sum];
    bool pos = solve(v,i-1,sum+v[i]);
    bool neg = false;
    if(!pos) neg = solve(v,i-1,sum-v[i]);
    return dp[i][180*16 + sum] = pos || neg;
}

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    memset(dp, -1, sizeof(dp));
    bool ans = solve(v,n-1,0);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
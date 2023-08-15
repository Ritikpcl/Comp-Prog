#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(vector<ll>& nums, ll cnt, ll i, ll j){
    if(i==j) return;
    if(abs(nums[i]-nums[j]) == 4) cnt++;

    solve(nums, cnt, i-1,j);
    solve(nums, cnt, i-1,j-1);
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        for(ll i=0; i<n; i++) cin>>v[i];
        int cnt = 0;
        solve(v, cnt, n-2,n-1);
        cout<<cnt<<endl;
    }
return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int



void Sieve(ll n, vector<bool>& v, vector<ll>& dp){
	for (ll i = 2; i <= n; i += 2){
        dp[i] = 2;
    }

	for (ll i = 3; i <= n; i += 2){
		if (!v[i]){
			dp[i] = i;
			for (ll j = i; (j*i) <= n; j += 2){
				if (!v[j*i])	v[j*i] = true, dp[j*i] = i;
			}
		}
	}
}

void solve(){
    ll n;
    cin>>n;

    vector<bool> v(n+1,false);
    vector<ll> dp(n+1,false);
    Sieve(n,v,dp);

    unordered_map<ll,ll> mp;
    vector<ll> ans;

    ans.push_back(n);
    bool prime = false;
    if(dp[n]) n--, prime = true;

    while(n>1){

        if(n == 2){
            ans.push_back(2);
            break;
        }
        
        bool flag = true;
        while(flag){
            ll x = n-1;
            while(n%x) x--;
            if(mp[x] >= 2 || (prime && dp[n-x])) continue;
            n -= x;
            if(dp[x]) prime = true;
            ans.push_back(n);
            flag = false;
        }
    }

    ans.push_back(1);

    reverse(ans.begin(),ans.end());
    for(auto i: ans) cout<<i<<" ";
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
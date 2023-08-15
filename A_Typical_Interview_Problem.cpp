#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string str = "FBFFBFFB";
    ll x = ceil(n/8.0);
    string a = str;
    while(x--) a += str;

    ll len = a.length();
    vector<vector<ll>> dp(n+1, vector<ll>(len+1,0));

    ll maxi = 0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=len; j++){
            if(s[i-1] == a[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                maxi = max(maxi,dp[i][j]);
            }
        }
    }

    if(maxi == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
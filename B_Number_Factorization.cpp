#include <bits/stdc++.h>
using namespace std;
#define ll long long int 


ll isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return i;
    }
    return -1;
}

int main()
{
ll t;
cin>>t;
while(t--){
        ll n;
        cin>>n;
        unordered_map<ll,ll> mp;
        ll k = 2;
        while(n>1){
            ll k = isPrime(n);
            if(k == -1){
                mp[n]++;
                break;
            }
            else{
                mp[k]++;
                n /= k;
            }
        }

        queue<pair<ll,ll>> q;
        for(auto i: mp){
            q.push({i.first,i.second});
        }

        ll ans = 0;
        while(!q.empty()){
            ll size = q.size();
            ll temp = 1;
            while(size--){
                ll x = q.front().first;
                ll cnt = q.front().second;
                q.pop();
                temp *= x;
                cnt--;
                if(cnt) q.push({x,cnt});
            }
            ans += temp;
        }
        cout<<ans<<endl;
}
return 0;
}
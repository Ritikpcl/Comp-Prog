#include <bits/stdc++.h>
using namespace std;  
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> h(n);
        vector<ll> p(n);
        for(ll i=0; i<n; i++) cin>>h[i];
        for(ll i=0; i<n; i++) cin>>p[i];

        priority_queue<pair<ll,ll> , vector<pair<ll,ll>> , greater<pair<ll,ll>>> pq;
        for(ll i=0; i<n; i++) pq.push({p[i], h[i]});

        ll sum = k;
      
        while(!pq.empty() && k > 0){
            if(pq.top().second <= sum){
                pq.pop();
                continue;
            }
            k -= pq.top().first;
            sum += k;
        }

        if(k>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
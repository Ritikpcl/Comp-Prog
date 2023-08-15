#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(ll i=0;i<n; i++){
            ll x;
            cin>>x;
            pq.push(x);
        }

        for(ll i=0; i<m; i++) {
            ll x;
            cin>>x;
            pq.pop();
            pq.push(x);
        }

        ll sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        cout<<sum<<endl;
    }
    return 0;
}
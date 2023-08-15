#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
        ll s,n,k; 
        cin>>n>>k;
        s = 0;
        vector<int> v(n);
        priority_queue<ll,vector<ll>>pq;
        for (ll i=0;i<n;i++) cin>>v[i];
        ll i =0;

        while(i < n-1){
            pq.push(abs(v[i]-v[i+1]));
            s+=abs(v[i]-v[i+1]);
            i++;
        }
    
        while (k>1){
            s-=pq.top();
            pq.pop();
            k--;
        }
        
        cout<<s<<endl;
} 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
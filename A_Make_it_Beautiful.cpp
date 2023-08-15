#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

static bool comp(ll& a, ll& b){
    return a>b;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);

        ll x = 0;
        ll cnt=1;
        for(ll i=0; i<n; i++){
             cin>>v[i];
             if(i==0) x = v[i];
             else if(v[i] == x) cnt++;
        }

        if((n == 2 && v[0] == v[1]) || cnt >=n){
            cout<<"NO"<<endl;
        }
        else {
            sort(v.begin(), v.end(), comp);
            if(n>=2 && v[0] == v[1]) swap(v[0],v[n-1]);
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    
return 0;
}
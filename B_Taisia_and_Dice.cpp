#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n,s,r;
    cin>>n>>s>>r;
    ll l = s-r;
    vector<ll> ans(n);
    ans[n-1]=l;
    n = n-2;
    while(r>0 && n>=0){
        if(r-l >= n){
            ans[n]=l;
            n--;
            r -= l;
        }
        else{
            l--;
        }
    }

    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
return 0;
}
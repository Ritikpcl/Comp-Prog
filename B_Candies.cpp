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
    if(!(n&1)) cout<<-1<<endl;
    else{
        vector<ll> ans;
        ll m=0;
        while(n>1){
            if(((n+1)/2)&1){
                n = (n+1)/2;
                ans.push_back(1);
            }else{
                n = (n-1)/2;
                ans.push_back(2);
            }
            m++;
        }
        reverse(ans.begin(),ans.end());
        cout<<m<<endl;
        for(auto i: ans) cout<<i<<" ";
        cout<<endl;
    }
}
return 0;
}
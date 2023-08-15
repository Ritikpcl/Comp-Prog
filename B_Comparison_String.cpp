#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    char prev = s[0];
    ll cnt=2,maxi=2;
    for(ll i=1; i<n; i++){
        if(s[i] == prev){
            cnt++;
        }else{
            cnt=2;
            prev = s[i];
        }
        maxi = max(maxi,cnt);
    }
    cout<<maxi<<endl;
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
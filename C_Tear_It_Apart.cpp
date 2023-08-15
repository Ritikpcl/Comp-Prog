#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    string s;
    cin>>s;
    ll n = s.length();
    ll ans = 1e8;
    for(char ch='a'; ch<='z'; ch++){
        ll len = 0, cnt = 0;
        for(ll j=0; j<n; j++){
            if(s[j] != ch) cnt++;
            else cnt = 0;
            len = max(len,(ll)log2(cnt) + 1);
        }
        ans = min(ans,len);
    }
    cout<<ans<<endl;
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
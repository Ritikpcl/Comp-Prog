#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll power(int n){
    if(n==0) return 1;
    return 10*power(n-1);
}

void solve(){
    string s;
    cin>>s;
    if(s[0] == '0') cout<<0<<endl;
    else{
        bool flag = s[0] == '?';

        ll cnt = 0;
        for(ll i=1; i<s.length(); i++){
            if(s[i] == '?') cnt++;
        }

        ll ans = power(cnt);
        if(flag) ans *= 9;
        cout<<ans<<endl;
    }
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
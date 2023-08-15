#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    string s;
    cin>>s;
    char prev = '0';
    string ans = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == '?') ans += prev;
        else {
            ans += s[i];
            prev = s[i];
        }
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
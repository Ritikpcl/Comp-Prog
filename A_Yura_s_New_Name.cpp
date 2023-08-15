#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    string s;
    cin>>s;
    int cnt = 0;
    int ans = s[0] == '_' ? 1 : 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '_'){
            if(cnt) ans++;
            else cnt=1;
        }else cnt = 0;
    }
    if(s.length()==1 && s[0] == '^') cout<<1<<endl;
    else{
        if(s[s.length()-1] == '_') ans++;
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    char c = s[0];
    ll idx=0;
    for(ll i=1; i<n; i++){
        if(c >= s[i]){
            c = s[i];
            idx = i;
        }
    }

    cout<<c;
    for(ll i=0; i<n; i++){
        if(i == idx) continue;
        cout<<s[i];
    }
    cout<<endl;
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
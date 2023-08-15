#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<pair<char,char>> st;
    for(int i=1; i<n; i++){
        st.emplace(s[i-1],s[i]);
    }
    cout<<st.size()<<endl;
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
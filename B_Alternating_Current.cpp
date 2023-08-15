#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        if(st.size() && st.top() == s[i]){
            st.pop();
        }else st.push(s[i]);
    }
    string ans = st.size() ? "No" : "Yes";
    cout<<ans<<endl;
} 

int main()
{
    ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}
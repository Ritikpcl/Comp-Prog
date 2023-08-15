#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    string s;
    cin>>s;
    stack<char> st;
    ll i=0,n=s.length();
    bool flag = false;
    ll maxi = 0, sbstr = 1,cnt = 0;
    while(i<n){
        if(s[i] == ')'){
            if(st.size()) {
                st.pop();
                cnt++;
                maxi =max(maxi,2*cnt);
                flag = false;
            }else if(cnt){
                sbstr++;
                cnt=0;
                flag = true;
            }
        }else st.push(s[i]);
        i++;   
    }
    if(flag) sbstr--;
    cout<<maxi<<" "<<sbstr;
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
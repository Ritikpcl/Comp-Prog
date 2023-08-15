#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

pair<int,string> resolve_query(string& s){
    pair<int,string> res;
    string temp = "";
    ll i=0, n = s.length();
    while(i<n && s[i] != ' ') temp += s[i++];
    if(temp == "pwd") res.first = 1;
    else res.first = 0;
    i++;
    temp = "";
    while(i<n) temp += s[i++];
    res.second = temp;
    return res;
}

void cd(vector<string>& s, string& res){
    int i=0,n=res.length();
    string s = "";
    while(i<n){
        while(i<n && res[i] != '/') s += res[i];
        
    }
}

string get_res(vector<string>& v){}

void solve(){
    ll n;
    cin>>n;
    vector<string> v;
    for(ll i=0; i<n; i++){
        string q;
        cin>>q;
        pair<int,string> res = resolve_query(q);
        if(res.first == 1){
            string ans = v.size() == 0 ? "/" : get_res(v);
            cout<<ans<<endl;
        }else cd(v,res.second);
    }
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
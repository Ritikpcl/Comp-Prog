#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    string s;
    cin>>s;
    ll minLen, maxLen, Unique;
    cin>>minLen>>maxLen>>Unique;
    unordered_map<char,ll> mp;
    unordered_map<string,ll> cnt;

    ll ans = 0;
    for(ll len=minLen; len<=maxLen; len++){
        ll i = 0, j = 0;
        string temp = "";
        while(j<s.length()){

            if(mp[s[j]]+1 > Unique) temp.erase(0,1), mp[s[i]]--, i++;

            else if((j-i+1) > len){
                cnt[temp]++;
                ans = max(ans,cnt[temp]);
                temp.erase(0,1);
                mp[s[i]]--;
                i++;
            } 
            
            else temp += s[j], mp[s[j]]++, j++;
        }
        mp.clear();
    }
    cout<<ans<<endl;

}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
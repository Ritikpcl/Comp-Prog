#include <bits/stdc++.h>
using namespace std;
#define ll long long int


vector<string> solve(vector<string>& v){
    
    vector<string> res;
    for(int k=0; k<v.size(); k++){
        string s = v[k];

        int i=0, j=s.length()-1;
        bool flag = true, ans = true;
        while(i<j){
            if(s[i] == s[j]) i++,j--;
            else{
                if(flag){
                    if(s[i+1] == s[i]) j--;
                    else i++;
                    flag = false;
                }else{
                    ans = false;
                    break;
                }
            }
        }
        if(ans) res.push_back(v[k]);
    }
    return res;
}


int main(){
    ll t;
    cin>>t;
    vector<string> v = {"aba","abcc","basdf","masfg","yzey"}, ans;
    while(t--){
        ans = solve(v);
        for(auto i: ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
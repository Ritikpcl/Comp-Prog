#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sol(string& s, int i){
    if(i>=s.length()) return 0;

    ll sum = 0;
    for(ll k=i; k<s.length(); k++){
        string temp = s;
        ll num = stoi(temp.substr(i,k-i+1));
        sum += num + sol(s,k+1);
    }
    return sum;
}

void solve(){
    string s;
    cin>>s;
    cout<< sol(s,0) + 1 << endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
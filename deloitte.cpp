#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void initCode() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}


void solve(){
    string s;
    getline(cin, s);

    int a=0, b=0;
    for(int i=0; i<s.length(); i++){
        if((s[i] - '0')&1) a++;
        else b++;
    }
    cout<<a<<endl<<b<<endl;
}


int main(){
    initCode();
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}
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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int cnt = 0;
    bool flag = 0;
    for(int i=0; i<n; i++){
        if(v[i] < 0) cnt++;
        if(v[i] == 0) flag = 1;
    }

    if(n == 1 && v[0] == 0 || flag) cout<<0<<endl;
    else if(cnt%2 == 0){
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }else{
        cout<<0<<endl;
    }
}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
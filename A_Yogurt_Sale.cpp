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
    ll n, a, b;
    cin>>n>>a>>b;
    ll ans = 0;

    if(n == 1){
        cout<<a<<endl;
        return;
    }

    if(2*a > b){
        ans = b*(n/2) + a*(n%2);
    }else{
        ans = a*n;
    }

    cout<<ans<<endl;
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
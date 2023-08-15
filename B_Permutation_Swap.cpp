#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n;
    cin>>n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        ans = __gcd(ans, abs(x-i));
    }
    cout<<ans<<endl;
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
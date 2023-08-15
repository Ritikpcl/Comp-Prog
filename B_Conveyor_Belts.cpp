#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    ll a = min({abs(1-x1), abs(1-y1), abs(n-x1), abs(n-y1)});
    ll b = min({abs(1-x2), abs(1-y2), abs(n-x2), abs(n-y2)});
    cout<<abs(a-b)<<endl;
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,m;
    cin>>n>>m;
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if((x1==1&&y1==1) || (x1==1&&y1==m) || (x1==n&&y1==m) || (x1==n&&y1==1)) cout<<2;
    else if((x2==1&&y2==1) || (x2==1&&y2==m) || (x2==n&&y2==m) || (x2==n&&y2==1)) cout<<2;
    else if(x1==1 || y1==1 || x2==1 || y2==1 || x1==n || y1==m || x2==n || y2 == m) cout<<3;
    else cout<<4;
    cout<<endl;
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
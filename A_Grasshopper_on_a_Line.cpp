#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,x;
    cin>>n>>x;
    if(n%x != 0){
        cout<<1<<endl;
        cout<<n<<endl;
    }else{
        cout<<2<<endl;
        if(n>0) cout<<n-1<<" "<<1<<endl;
        else cout<<n+1<<" "<<-1<<endl;
    }
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    a = abs(a);
    b = abs(b);
    if(a == b) cout<<2*a<<endl;
    else{
        ll dis = min(a,b);
        ll ans = 2*dis + 2*(a-dis) + 2*(b-dis) - 1;
        cout<<ans<<endl;
    }

}
return 0;
}
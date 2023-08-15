#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll a,b,c,d;
    ll x=0,y=0;
    cin>>a>>b>>c>>d;
    x = c + (-1)*a;
    y = d + (-1)*b;

    if(x > y || b > d) cout<<-1<<endl;
    else cout<<2*y-x<<endl;
}
return 0;
}
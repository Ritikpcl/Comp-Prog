
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n&1) cout<<-1<<endl;
    else cout<<1<<" "<<(n/2)<<endl;
}
return 0;
}
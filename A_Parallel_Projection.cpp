#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll w,d,h,a,b,f,g;
    cin>>w>>d>>h>>a>>b>>f>>g;

    bool flg_w = min(a,f) < min(w-a,w-f) ? true : false;
    bool flg_h = min(b,g) < min(d-b,d-g) ? true : false;
    bool flg_a = min({a,f,w-a,w-f}) < min({b,g,d-b,d-g}) ? true : false;
    ll ans = h;

    if(flg_a){
        if(flg_w){
            ans += a + f;
        }else ans += w-a + w-f;
        ans += abs(b-g);
    }else{
        if(flg_h){
            ans += b+g;
        }else ans += d-b + d-g;
        ans += abs(a-f);
    }
    cout<<ans<<endl;
}
return 0;
}
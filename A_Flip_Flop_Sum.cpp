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
    vector<ll> v(n);
    ll cnt = 0;
    ll sum = 0; 
    for(ll i=0; i<n; i++) cin>>v[i];
    for(ll i=0; i<n; i++) sum += v[i];
    
    bool flag = 0;
    bool chk = 0;
    for(ll i=0; i<n; i++){
        if(flag && v[i] == -1){
            chk = true;
            break;
        }else{
            if(v[i] == -1) {
                cnt++;
                flag = 1;
            }
            else flag = 0;
        }
    }
    if(chk) cout<<sum+4<<endl;
    else if(cnt) cout<<sum<<endl;
    else cout<<sum-4<<endl;
}
return 0;
}
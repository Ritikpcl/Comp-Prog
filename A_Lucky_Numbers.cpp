#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll mod=1e9+7;
ll inverse(ll i) 
{   
    if (i == 1) return 1; 
    return (mod - ((mod / i) * inverse(mod % i)) % mod) % mod;
}

ll solve(ll num){

    ll maxi=0, mini=num;
    while(num > 0)
    {
        ll d=num%10;
        maxi=max(maxi, d);
        mini=min(mini, d);
        num/=10;
    }
    return maxi-mini;
}



int main()
{
ll t;
cin>>t;
while(t--){
    ll l, r;
    cin>>l>>r;
    bool flag = true;

    vector<ll> arr={90, 900, 9000, 90000, 900000, 9000000, 90000000, 900000000};

    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] >= l && arr[i] <= r)
        {
            cout<<arr[i]<<endl;
            flag = false;
            break;
            
        }
    }

    ll maxi=solve(l);
    ll res=l;

    for(int i=l; i<=min(r, l+100); i++)
    {
        ll temp=solve(i);
        if(temp > maxi)
        {
            maxi=temp;
            res=i;
        }
    }
    if(flag) cout<<res<<endl;
}
return 0;
}
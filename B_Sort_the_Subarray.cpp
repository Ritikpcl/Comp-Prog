#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
     ll n;
     cin>>n;

     vector<ll> x(n), y(n);
     for(int i=0; i<n; i++) cin>>x[i];
     for(int i=0; i<n; i++) cin>>y[i];
     if(is_sorted(y.begin(), y.end())) {cout<<1<<" "<<n<<endl; return;}
     int i=0, j=n-1;
     while(i <= j && x[i]==y[i]) i++;
     while(i <= j && x[j]==y[j]) j--;
     if(i < j)
     {
        while(i-1>=0 && y[i] >= y[i-1]) i--;
        while(j+1 < n && y[j] <= y[j+1]) j++;
        cout<<i+1<<" "<<j+1<<endl;
     }
     else
     {
        vector<ll> v1(n);
        for(ll i=0; i<n; i++) v1[i]=y[i];
        vector<ll> v2; v2.push_back(v1[0]);
        for(ll i=1; i<v1.size(); i++)
        {
            if(v1[i] > v2.back()) v2.push_back(v1[i]);
            else
            {
                ll index=lower_bound(v2.begin(), v2.end(), v1[i])-v2.begin();
                v2[index]=v1[i];
            }
        }
        ll t=(ll)v2.size();
        cout<<t<<endl;
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

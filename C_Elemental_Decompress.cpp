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
        vector<ll> v(n+1);
        vector<ll> check(n+1);
        for(ll i=1; i<=n; i++) check[i]=i;
        bool flag = 1;
        ll num = 0;
        ll idx = 0;
        int idx1 = 0;
                int idx2= 0;
        unordered_map<ll,ll> mp;
        for(ll i=1; i<=n; i++){
            ll x;
            cin>>x;
            mp[x]++;

            if(mp[x] == 2){
                num = x;
            } 

            if(mp[x] > 2 || mp[1] >= 2){
                cout<<"NO"<<endl;
                flag  = 0;
                break;
            }
          
            v[i]=x;
            if(x<=n) check[x] = 0;
        }

        if(flag){
            bool flag1 = 1;
            ll miss = 0;
            for(ll i=1; i<=n; i++){
       
                if(check[i] == i){
                    miss = i;
                    if(num < i){
                        cout<<"NO"<<endl;
                        flag1  = 0;
                        break;
                    }
                }
            }
        
            ll idx1 = 0;
            ll idx2 = 0;
            if(flag1){
                ll cnt = 0;
            
                for(auto i: mp){
                    if(i.second >= 2) {
                        cnt++;
                        
                    }
                    if(cnt >= 2){
                        cout<<"NO"<<endl;
                        flag1  = 0;
                        break;
                    }
                }


                for(ll i=1; i<=n; i++){
                    if(v[i] == num){
                        if(idx1 == 0) idx1 = i;
                        else idx2 = i;
                    } 
                }
            }
            
            if(flag1){
                vector<ll> v1(n+1);
                vector<ll> v2(n+1);
                v1 = v;
                v2 = v;
                v1[idx1] = miss;
                v2[idx2] = miss;
                cout<<"YES"<<endl;
                for(ll i=1; i<=n ;i++) cout<<v1[i]<<" ";
                cout<<endl;
                for(ll i=1; i<=n; i++) cout<<v2[i]<<" ";
                cout<<endl;
            }
        }
    }
    
return 0;
}
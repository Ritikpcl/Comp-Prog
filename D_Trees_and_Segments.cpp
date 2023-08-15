#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n, k;
    cin>>n>>k;
    vector<char> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll i = 0, j = 0, x = k, zero1 = 0, one1 = 0, zero2 = 0, one2 = 0;
    ll i1=0,j1=0,i2=0,j2=0;
    while(j<n){
        if(v[j] != '0'){
            if(x == 0){
                while(i<=j && v[i] == '0') i++;
                i++;
            }else x--;
        }

        if(zero1 <= j-i+1){
            zero1 = j-i+1;
            i1 = i;
            j1 = j;
        }

        j++;
    }
    
    ll b = 0;
    for(ll p=0; p<i1; p++){
        if(v[p] == '1'){
            b++;
        }else b = 0;
        one1 = max(one1,b);
    }
    one1 = max(one1,b);

    b=0;
    for(ll p=j1+1; p<n; p++){
        if(v[p] == '1'){
            b++;
        }else b = 0;
        one1 = max(one1,b);
    }
    one1 = max(one1,b);

    
    j = 0, i = 0, x = k;
    while(j<n){
        if(v[j] != '1'){
            if(x == 0){
                while(i<=j && v[i] == '1') i++;
                i++;
            }else x--;
        }

        if(one2 <= j-i+1){
            one2 = j-i+1;
            i2 = i;
            j2 = j;
        }

        j++;
    }

    b = 0;
    for(ll p=0; p<i2; p++){
        if(v[p] == '0'){
            b++;
        }else b = 0;
        zero2 = max(zero2,b);
    }
    zero2 = max(zero2,b);

    b=0;
    for(ll p=j2+1; p<n; p++){
        if(v[p] == '0'){
            b++;
        }else b = 0;
        zero2 = max(zero2,b);
    }
    zero2 = max(zero2,b);

    vector<ll> ans;
    for(ll i=1; i<=n; i++){
        ll x = max(zero1*i + one1, zero2*i + one2);
        ans.push_back(x);
    }

    for(ll i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;

}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
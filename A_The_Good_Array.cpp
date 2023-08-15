#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,k;
    cin>>n>>k;
    ll mini = n; 
    ll i = 1;
    ll left,right;
    while(i<=n){
        right = (n+k-i-1)/k; 
        left = (i+k-2)/k;
        mini = min(mini,left+right);
        i++; 
    }
    mini++;
    cout <<mini<<endl;
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
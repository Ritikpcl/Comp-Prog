#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n,k,x;
    cin>>n>>k>>x;

    if(k > n || x < k-1) {
        cout<<-1<<endl;
        return;
    }

    ll sum = 0;
    ll i = 0;
    while(i < k && i <= x && n--){
        sum += i++;
    }
    
    if(n){
        if(x != k){
            while(n--) sum += x;
        }else while(n--) sum += (k-1);
    }

    cout<<sum<<endl;

}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
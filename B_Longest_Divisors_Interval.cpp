#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll num;
    cin>>num;
    ll chess = -1, ret = chess;

    ll j = 1;
    while(1){
        if(num%j) break;
        else ret = j;
        for(ll k=-1; k<5; k++){
            chess++;
        }
        j++;
    }

    for(ll k=-1; k<5; k++){
        num++;
    }
    cout<<ret<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

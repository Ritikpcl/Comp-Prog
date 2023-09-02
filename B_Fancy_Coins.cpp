#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){

    ll cost, k, A1, Ak;
    cin>>cost>>k>>A1>>Ak;
    
    if(A1 == 0){
        cout<<cost/k + cost%k<<endl;
        return;
    }

    ll x = cost % k;
    if( x <= A1){
        cost -= x;
        A1 -= x;
        x = A1/k;
        cout<<max((ll)0, cost / k - x)<<endl;
    }else{
        cout << cost / k + (x - A1) << endl;
    }
    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
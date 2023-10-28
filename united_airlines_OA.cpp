#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void initCode() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

static bool comp(vector<ll>& a, vector<ll>& b){
    return a[0] > b[0];
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> candy(n), prty(n), mini(n+1), maxi(n+1);

    for(ll i=0; i<n; i++) cin>>candy[i];
    for(ll i=0; i<n; i++) cin>>prty[i];

    vector<vector<ll>> v(n);
    for(ll i=0; i<n; i++) v[i] = {prty[i],candy[i]};
    sort(v.begin(),v.end(),comp);

    ll sum = 0;
    for(ll i=0; i<n; i++){
        sum += v[i][1];
        maxi[v[i][0]] = sum;
    }

    sum = 1;
    for(ll i=0; i<n; i++){
        mini[v[i][0]] = sum;
        sum += ceil((float)v[i][1] / k);
    }

    ll q;
    cin>>q;

    for(ll i=0; i<q; i++){
        ll x,y;
        cin>>x>>y;

        if(mini[prty[x-1]] <= y && maxi[prty[x-1]] >= y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}


int main(){
    initCode();
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}

/*

10 10
976 436 564 330 984 232 79 126 816 109
9 3 4 7 8 5 2 10 6 1
10 
7 4342
3 1513
5 3175
2 3806
6 1010
5 3832
3 1647
1 84 
5 3529
4 2870 

*/


/*
5 3
5 2 6 4 1
1 2 3 4 5
5 
5 1
4 4
3 16
1 16
2 8
*/
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

    sum = 0;
    for(ll i=0; i<n; i++){
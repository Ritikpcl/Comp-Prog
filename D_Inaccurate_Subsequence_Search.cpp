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


void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    unordered_map<ll,ll> mpA, mpB;
    
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    for(ll i=0; i<m; i++){
        cin>>b[i];
        mpB[b[i]]++;
        mpA[a[i]]++;
    }

    ll curr = 0, ans = 0;
    for(ll i=0; i<m; i++){
        if(mpB[a[i]] > 0){
            curr++;
            mpB[a[i]]--;
        }
    }

    mpB.clear();
    for(ll i=0; i<m; i++) mpB[b[i]]++;    

    if(curr >= k) ans++;

    ll i = 0, j = m;
    while(j < n){
        mpA[a[i]]--;
        if(mpB[a[i]] > mpA[a[i]]) curr--;
        mpA[a[j]]++;
        if(mpB[a[j]] >= mpA[a[j]]) curr++;
        if(curr >= k) ans++;
        i++,j++;
    }

    cout << ans << endl;
}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
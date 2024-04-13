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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n), pref(n,0);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    // sort(v.begin(), v.end());
    
    ll k1 = k/2 + k%2, k2 = k/2;

    int i=0;
    while(i<n && k1 >= v[i]){
        k1 -= v[i++];
    }

    if(i < n) v[i] -= k1;

    int j=n-1;
    while(j>=i && k2 >= v[j]){
        k2 -= v[j--];
    }

    if(j >= i){
        cout << i + n - j - 1 << endl;
    }else cout<< n << endl;

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
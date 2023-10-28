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


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        int x;
        cin>>x;

        int idx = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << n - idx << endl;
    }
}


int main(){
    initCode();
    ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}
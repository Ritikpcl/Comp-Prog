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
    ll n, c, d;
    unordered_map<ll,ll> mp;
    cin >> n >> c >> d;
    vector<vector<ll>> v(n, vector<ll> (n,0));
    ll mini = INT_MAX;

    for(int i=0; i<n*n; i++){
        ll x;
        cin>>x;
        mp[x]++;
        mini = min(mini, x);
    }

    v[0][0] = mini;  

    for(int i=1; i<n; i++){
        v[0][i] = v[0][i-1] + d;
    }

    for(int i=1; i<n; i++){
        v[i][0] = v[i-1][0] + c;
        for(int j=1; j<n; j++){
            v[i][j] = v[i][j-1] + d;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mp[v[i][j]]--;
            if(mp[v[i][j]] < 0){
                cout<< "NO"<<endl;
                return;
            }
            // cout<<v[i][j]<<" ";
        }
        // cout<<endl;
    }

    cout<<"YES"<<endl;
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


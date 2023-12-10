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


vector<int> solve(){
    vector<int> inputImage = {8,2,3,1,2,3,4,5,6};
    int n = inputImage[1], m = inputImage[2];
    vector<vector<int>> v(n, vector<int> (m,0));
    vector<int> ans;

    int k = 3;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            v[i][j] = inputImage[k++];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=n-1; j>=0; j--){
            ans.push_back(v[j][i]);
        }
    }

    return ans;
}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        vector<int> ans = solve();
        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
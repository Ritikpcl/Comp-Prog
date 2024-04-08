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

/*
    n = 8
    0 1 1 2 3 5 8 13... 

*/

vector<int> solve(){
    
    int n;
    cin>>n;

    int prev1 = 0, prev2 = 1;

    if(n == 1) return {0};
    if(n == 2) return {0,1};

    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);

    for(int i=2; i<n; i++){
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
        ans.push_back(curr);
    }

    return ans;

}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        vector<int> v = solve();
        for(auto i: v){
            cout<<i<<" ";
        }
    }
    return 0;
}
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

vector<vector<int>> ans;

void combination(int n, int currNum, int product, vector<int>& temp){
    
    if(product > n || currNum > n/2) return;
    
    if(product == n){
        ans.push_back(temp);
        return;
    }

    temp.push_back(currNum);
    combination(n,currNum,product*currNum,temp);
    temp.pop_back();

    combination(n,currNum+1,product,temp);
}

void solve(){
    int n;
    cin>>n;
    
    vector<int> temp;
    
    combination(n,2,1,temp);
}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    for(auto i: ans){
        for(auto j: i) cout<<j<<" ";
        cout<<endl;
    }
    
    return 0;
}
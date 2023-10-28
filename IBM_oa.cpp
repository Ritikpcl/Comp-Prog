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

static bool comp(vector<int>& a, vector<int>& b){
    if(a[0] == b[0]) return a[1] < b[1];
    return a[0] < b[0];
}

int solve(vector<int>& v){
    
    int n = v.size();
    vector<vector<int>> temp(n);
    vector<int> visit(n,0);
    for(int i=0; i<v.size(); i++){
        temp[i] = {v[i],i};
    }
    sort(temp.begin(),temp.end(), comp);
    
    int ans = 0;
    for(int i=0; i<n; i++){
        int val = temp[i][0];
        int idx = temp[i][1];
        if(visit[idx] == 0){
            ans += val;
            int x = idx-1;
            while(x>=0 && visit[x] == 1) x--;
            if(x>=0) visit[x] = 1;

            x = idx+1;
            while(x<n && visit[x] == 1) x++;
            if(x < n) visit[x] = 1;
           
            visit[idx] = 1;
        }
    }
    return ans;
}


int main(){
    initCode();
    // ll t;
    // cin>>t;
    // while(t--){
        vector<int> v = {7,9,6,6,6,5,4,3};
        cout<<solve(v);
    // }
    return 0;
}
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

void reverse(vector<int>& v){
    int i=0, j=v.size()-1;
    while(i<j){
        swap(v[i++],v[j--]);
    }
}

int solve(int data, int key){

    vector<int> v;
    while(data){
        v.push_back(data%10);
        data /= 10;
    }

    reverse(v.begin(),v.end());

    int n = v.size();
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[i] = v[(i+key)%n];
    }

    int res=0;
    for(int i=0; i<n; i++){
        res = res*10 + ans[i];
    }

    return res;
}


int main(){
    initCode();
    // ll t;
    // cin>>t;
    // while(t--){
        cout<<solve(25143,3);
    // }
    return 0;
}
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
     int n = 4;
    vector<int> arr = {1, 3, 2, 5};
    
    int sum = 0;
    
    // sum of all elements
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    //total sum on (n+1)
    int x = n + 1;
    int total_sum = x*(x+1)/2;
    
    
    int missing_number = total_sum - sum;
    
    cout<<missing_number<<endl;
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
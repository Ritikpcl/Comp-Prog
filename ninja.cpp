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

int find_pivot(int arr[], int n){
    int i;
    for(int i=0; i<n; i++){
        if(arr[i] > arr[(i+1) % n]) return i;
    }
}

int solve(int N, vector<int>& A){
    int sum = 0;
    int i;
    int pivot = find_pivot(A,N);

    int diff = n-1-pivot;

    for(int i=0; i<n; i++){
        sum = sum + ((i+diff)%N) * arr[i];
    }

    return sum;
}


int main(){
    initCode();
    // ll t;
    // cin>>t;
    // while(t--){
        vector<int> A = {8,3,1,2};
        cout<<solve(4,A);
    // }
    return 0;
}
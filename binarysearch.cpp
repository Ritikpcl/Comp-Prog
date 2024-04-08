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


bool solve(){
                   //l         h
    vector<int> v = {1,3,4,5,6,7};

    int low = 0, high = 5, target = 9;

    while(low<=high){
        int mid = low + (high-low)/2;

        if(v[mid] < target){
            low = mid+1;
        }else if(v[mid] > target){
            high = mid-1;
        }else{
            return true;
        }
    }

    return false;

}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        cout<< solve();
    }
    return 0;
}
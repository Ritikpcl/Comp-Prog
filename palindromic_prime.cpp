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

void setPrime(vector<bool>& prime){
    int n = 100001;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

bool checkPal(int n){

    string s = to_string(n);

    int i=0, j=s.length()-1;
    while(i<j){
        if(s[i] == s[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}

void solve(vector<bool>& v){
    int l,r;
    cin>>l>>r;
    
    int ans=0;

    for(int i=l; i<=r; i++){
        if(v[i] && checkPal(i)){
            ans++;
        }
    }

    cout<<ans<<endl;

}


int main(){
    initCode();
    ll t;
    cin>>t;

    vector<bool> v(100001,true);
    setPrime(v);

    while(t--){
        solve(v);
    }
    return 0;
}
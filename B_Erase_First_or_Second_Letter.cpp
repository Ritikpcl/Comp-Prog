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

unordered_map<string,int> st;

void solve(string& s){
    
    int n = s.length();

    if(st.find(s) != st.end()) return; 

    st[s] = 1;

    if(n <= 1) return;

    char ch1 = s[n-1];
    char ch2 = s[n-2];

    //remove 1st ele
    s.pop_back();
    solve(s);

    //remove 2nd ele
    s.pop_back();
    s += ch1;
    solve(s);

    s.pop_back();
    s += ch2;
    s += ch1;
    
}

void solve(){
    int n;
    cin>>n;
    string s = "";
    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        s += ch;
    }

    reverse(s.begin(),s.end());
    solve(s);

    cout<<st.size()<<endl;
}

int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        solve();
        st.clear();
    }
    return 0;
}
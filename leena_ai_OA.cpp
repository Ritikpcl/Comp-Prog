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


int solve(){  // 0123456789
    string s1 = "20:06:2022", s2 = "28:06:2022";


    string a = "", b = "";
    for(int i=6; i<=9; i++){
        a += s1[i];
        b += s2[i];
    }
    if(stoi(b) > stoi(a)) return 1000;

    a = "", b = "";
    for(int i=3; i<=4; i++){
        a += s1[i];
        b += s2[i];
    }
    if(stoi(b) > stoi(a)) return 200;

    a = "", b = "";
    for(int i=0; i<=1; i++){
        a += s1[i];
        b += s2[i];
    }
    if(stoi(b) > stoi(a)) return 50;

    return -1;

}


int main(){
    initCode();
    ll t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}
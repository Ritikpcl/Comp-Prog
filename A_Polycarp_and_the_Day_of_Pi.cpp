#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    string n;
    cin>>n;
    string p = "314159265358979323846264338327";
    ll cnt=0;
    ll i =0;
    while(i<n.length() && n[i] == p[i]){
        cnt++;
        i++;
    }
    cout<<cnt<<endl;
}
return 0;
}
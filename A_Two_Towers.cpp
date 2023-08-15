#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    bool flag1 = false;
    bool flag2 = false;
    for(int i=1; i<n; i++){
        if(a[i-1] == a[i]){
            for(int j=0; j<n-i; j++){
                b += a[n-j-1];
                a.pop_back();
            }
            flag1 = true;
            break;
        }
    }

    for(int i=1; i<b.length(); i++){
        if(b[i-1] == b[i]){ 
            if(flag1 || flag2 || a[a.length()-1] == b[b.length()-1]){
                flag2 = true;
                flag1 = true;
                break;
            }else flag2 = true;
        }
    } 

    if(flag2 && flag1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    }
    return 0;
}
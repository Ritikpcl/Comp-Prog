#include <bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<s[0]<<" ";
        for(int i=1;i<s.length()-1; i++) cout<<s[i];
        cout<<" "<<s[s.length()-1];
        cout<<endl;
    }
    
return 0;
}

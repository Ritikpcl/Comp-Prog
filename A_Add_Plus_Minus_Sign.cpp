#include <bits/stdc++.h>
using namespace std;   /* */ 

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,x;
        cin>>s;
        x = "";
        int k = s[0]=='1' ? 1 : 0;
        for(int i=1; i<n; i++){
            if(i<n && k>0 && s[i]=='1'){
                x += '-';
                k -= 1;
            } 
            else{
                x += '+';
                k += s[i]=='0' ? 0 : 1;
            }
        }
        cout<<x<<endl;
    }
return 0;
}
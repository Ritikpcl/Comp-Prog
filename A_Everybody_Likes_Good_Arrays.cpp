#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int ans=0;
        int odd;
        if(v[0]&1) odd = 1;
        else odd = 0;
        for(int i=1; i<n; i++){
            if(v[i]%2 == odd){
                ans++;
            }else odd = v[i]%2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
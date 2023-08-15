#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int> (5,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin>>v[i][j];
        }
    }
    int cnt = 0;
    bool flag = false;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            int cnt = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            for(int k=0; k<n; k++){
                if(v[k][i]+v[k][j]>0){
                    cnt++;
                    cnt1 += v[k][i];
                    cnt2 += v[k][j];
                }
                if(cnt>=n && cnt1 >= n/2 && cnt2 >= n/2) {
                    flag = true;
                    break;
                } 
            }
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
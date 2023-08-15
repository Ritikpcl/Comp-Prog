#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        long double x,y,z;
        for(int i = 0;i<m;i++){
            cin >> x >> y >> z;
            
            long double num = 2*exp(log(x*z) /2.0);
            pair<long double,long double> res = {y-num,y+num};

            if(x<0 ^ z<0){
                cout << "NO" << endl;
                continue;
            }

            auto ptr = upper_bound(v.begin(),v.end(),res.first)-v.begin();

            if(ptr<n && v[ptr]<res.second){
                cout << "YES" << endl;
                cout << v[ptr] << endl;
            }
            else{
                cout << "NO" << endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
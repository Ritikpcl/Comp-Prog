#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<pair<int,vector<int>>> mp(51);
    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++){
        int l,h;
        cin>>l>>h;
        v.push_back({l,h});
        for(int j=l; j<=h; j++){
            mp[j].first++;
            mp[j].second.push_back(i);
        }
    }

    bool flag = false;
    int x = mp[k].first;
    for(int i=1; i<51; i++){
        if(mp[i].first >= x){
            for(int j=0; j<mp[i].second.size(); j++){
                int idx = mp[i].second[j];
                if(v[idx].first == -1){
                    flag = true;
                    break;
                }else{
                    v[idx] = {-1,-1};
                    mp[i].first--;
                }
            }
        }
    }

}
return 0;
}
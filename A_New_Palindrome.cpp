#include <bits/stdc++.h>
  using namespace std;
  
  void rev(vector<int>& v, vector<int>& s){
    int i=0,j=s.size()-1;
    while(i<j){
        swap(v[s[i++]],v[s[j--]]);
    }
  }

  int solve(vector<int>& v, int n){
    vector<int> temp = v, t;
    t.push_back(temp[0]);
    int sz = 1;
    for(int i=1; i<n; i++){
      if(temp[i] >= t[sz-1]) {
        t.push_back(temp[i]);
        sz++;
      }else{
        int idx = lower_bound(t.begin(),t.end(),temp[i])-t.begin();
        t[idx] = temp[i];
      }
    }
    return sz;
  }

  int help(vector<int>& v, vector<int>& s, int n){
    if(n<0) {
        rev(v,s);
        int res = solve(v,v.size());
        rev(v,s);
        return res;
    }
    int skip = help(v,s,n-1);
    s.push_back(n);
    int not_skip = help(v,s,n-1);
    s.pop_back();
    return max(skip,not_skip);
  }

  int main() {

    int n;
    cin>>n;
    vector<int> v(n),s;
    for(int i=0; i<n; i++) cin>>v[i];
    int ans = help(v,s,n-1);
    cout<<ans<<endl;
  }
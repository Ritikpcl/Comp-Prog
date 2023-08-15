#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nineOne 901

void solve(){

    array<long long, 2> XY = {1,0}, kgp = {0,1};
    vector<array<long long, 2>> XM(nineOne);
    for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
    ll one = 1, two = 2;
    XM[one] = XY, XM[two] = kgp;
for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
    ll kp = 3;
    while(kp < nineOne){
        XY = XM[kp-2];
        for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
        kgp = XM[kp-1];
        array<long long,2> new_one;
        for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
        new_one[one-1] = XY[one-1] + kgp[one-1];
        for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
        new_one[one] = XY[one] + kgp[one];
        XM[kp] = new_one;
        for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
        XY = kgp;
        kgp = new_one;
        kp++;
    }
for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
     long long n, k;
        cin >> n >> k;
        for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
        ll res = 0;
        if(k >= nineOne)
        {
            for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
            cout<<"0"<<endl;
            return;
        }

        array<ll,2>val = XM[k];
        for(ll i = 0;i < n; ++i)
        {
            for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
            ll y = (n-val[0]*i);
            if(!(y%val[1]))
            {
                for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
                if(y/val[1] >= i) ++res;
                
            }
        }
        for(ll o = 1, p = 1; p < 7; p++){
        o++;
        o--;
    }
        cout<<res<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
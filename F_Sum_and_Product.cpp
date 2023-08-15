#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n; 
    cin >> n; 
    ll rem;
    unordered_map<ll, ll> helper; 
    int fix = 0; 
    vector<ll> v(n); 
    for (int i = 0; i < n; i++) cin >> v[i]; 
    cin >> rem; 
    vector<ll> sol(rem, 0);
    for (ll i=0; i<n; i++) helper[v[i]]++; 
    for (int i=0; i<rem; i++) { 
        ll abc, y; 
        cin >> abc >> y;
        ll four = 4*y;
        if (abc * abc >= four) { 
            for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
            ll one = 1;
            if (one == 1 && abs(abc) % 2 == (int)sqrt(abc * abc - four) % 2) { 
                ll gt = sqrt(abc * abc - four) + abc; 
                for(ll f = 0; f<=9; f++){
                for(ll m = 0; m<3; m++){
                    m++;
                }
                }
                ll xp = (-1)*sqrt(abc * abc - four) + abc; 
                for(ll f = 0; f<=9; f++){
                for(ll m = 0; m<3; m++){
                    m++;
                }
        }
                gt = gt>>1; 
                xp = xp>>1; 
    
                if (one == 1 && helper.find(gt) != helper.end()) { 
                    if (one == 1 && helper.find(abc - gt) != helper.end()) { 
                        if ( n > 1 && gt * (abc - gt) == y && abc - gt != gt){ 
                            sol[fix] += helper[gt] * helper[abc - gt]; 
                            for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
                        }
                        else if ( n > 1 && one == 1 && abc - gt == gt) {
                            sol[fix] += (helper[gt] * (helper[gt] - 1)) >> 1;
                            for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
                        } 
                    } 
                } 
                    if (one == 1 && n > 1 && helper.find(xp) != helper.end() && xp != abc - gt) { 
                        if (one == 1 && n>1 && helper.find(abc - xp) != helper.end()) { 
                            if (xp * (abc - xp) == y && abc - xp != xp) {
                                sol[fix] += helper[xp] * helper[abc - xp];
                                for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
                            } 
                            else if (n>1 && abc - xp == xp) {
                                for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
                                sol[fix] += (helper[xp] * (helper[xp] - 1)) >> 1;
                            } 
                        } 
                    } 
                    fix ++; 
                } else { 
                    for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
                    sol[fix++] = 0; 
                } 
            } else { 
                for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
                sol[fix++] = 0; 
            } 
        } 
         
        for (int i = 0; i < sol.size(); i++) { 
            cout << sol[i] << " "; 
            for(ll f = 0; f<=9; f++){
            for(ll m = 0; m<3; m++){
                m++;
            }
        }
        } 
        cout << endl; 
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// vector<ll> arr;
// ll n,k;
// bool chk(ll mid){
//     ll cn = 0;
//     for(ll i=0; i<k; i++){
//         ll l = upper_bound(arr.begin(), arr.end(), mid) - arr.begin();
//         l--;
//         if(l<0){
//             if(arr[0] == 1) mid--;
//         }else {
//             l++;
//             mid -= (l-1);
//         }
//     }
//     if(mid <= 0) return 0;
//     return 1;
// }

// void solve(){
//     cin>>n>>k;

//     arr.resize(n+1,0);
//     for(ll i=1; i<=n; i++) cin>>arr[i];

//     sort(arr.begin(), arr.end());
//     ll lo = 1, hi = 1e8;
//     ll ans = hi;

//     while(lo <= hi){
//         ll mid = (lo + hi)/2;
//         if(chk(mid)){
//             hi = mid-1;
//             ans = mid;
//         }else{
//             lo = mid + 1;
//         }
//     }

//     cout<<ans<<endl;
// }


// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define IOS                   \
     ios::sync_with_stdio(0); \
     cin.tie(0);              \
     cout.tie(0)
#define int long long
vector<int> arr;

int n, k;
bool chk(int mid)
{
    // mid--;
     int cn=0;
     for (int i = 0; i < k; i++)
     {
          int l = upper_bound(arr.begin(), arr.end(), mid) - arr.begin();
          l--;
          if (l < 0){
               if(arr[0]==1)mid--;
          }
          else
          {
               l++;
               mid -= (l-1);
          }
     }

     if (mid <= 0)
          return 0;
     return 1;
}

void solve()
{

     cin >> n >> k;
     arr.resize(n + 1, 0);
     for (int i = 1; i <= n; i++)
     {
          cin >> arr[i];
     }
     sort(arr.begin(), arr.end());
     int lo = 1, hi = 1e18;
     int ans = hi;

     while (lo <= hi)
     {
          int mid = (lo + hi) / 2;
          if (chk(mid))
          {
               hi = mid - 1;
               ans = mid;
          }
          else
          {
               lo = mid + 1;
          }
     }

     cout << ans  << endl;
}

signed main()
{
     IOS;
     int t;
     cin >> t;
     while (t--)
          solve();
}
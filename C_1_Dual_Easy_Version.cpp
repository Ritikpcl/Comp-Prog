// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long int


// // void solve(){
// //     ll n;
// //     cin>>n;
// //     vector<ll> v(n);
// //     ll mini = 21, maxi = -21;
// //     vector<pair<ll,ll>> r1, r2;
// //     for(ll i=0; i<n; i++){
// //         cin>>v[i];
// //         mini = min(mini, v[i]);
// //         maxi = max(maxi, v[i]);
// //     }

// //     //case1
// //     ll s1 = 0;
// //     for(ll i=1; i<n; i++){
// //         if(v[i] < v[i-1]){
// //             ll diff = abs(v[i] - v[i-1]);
// //             ll x = diff/abs(maxi);
// //             if(diff % abs(maxi) != 0) x++;
// //             s1 += x;
// //             v[i] += x*maxi;
// //             for(ll j=0; j<x; j++)
// //                 r1.push_back({i,i-1});
// //         }
// //     }

// //     //case2
// //     ll s2 = 0;
// //     for(ll i=n-2; i>=0; i--){
// //         if(v[i] > v[i+1]){
// //             ll diff = abs(v[i] - v[i+1]);
// //             ll x = diff/abs(mini);
// //             if(diff % abs(mini) != 0) x++;
// //             s2 += x;
// //             v[i] += x*mini;
// //             for(ll j=0; j<x; j++)
// //                 r2.push_back({i,i+1});
// //         }
// //     }

// //     if(s1 <= 50){
// //         cout<<s1<<endl;
// //         for(ll i=0; i<r1.size(); i++) 
// //             cout<<r1[i].first<<" "<<r1[i].second<<endl;
// //     }else{
// //         cout<<s2<<endl;
// //         for(ll i=0; i<r2.size(); i++) 
// //             cout<<r2[i].first<<" "<<r2[i].second<<endl;
// //     }

// // }


// // int main(){
// //     ll t;
// //     cin>>t;
// //     while(t--){
// //         solve();
// //     }
// //     return 0;
// // }





// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long int


// // void solve(){
// //     ll n;
// //     cin >> n;
// //     vector<ll> v(n), temp(n);
// //     int mini = 21;
// //     for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //     int maxi = -21;
// //     ll k = -1;
// //     int idxMin = k, idxMax = k;
// //     for (int i = 0; i < n; i++){
// //         cin>>v[i];
// //         temp[i] = v[i];
// //         if(v[i] > maxi) maxi = v[i], idxMax = i;
// //         for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //         if(v[i] < mini) mini = v[i], idxMin = i;
// //     }
    
// //     int s1 = 50, s2 = 50;
// //     vector<pair<ll, ll>> A,B;

// //     ll zero = 0;

// //     if((mini |  maxi) == zero)
// //     {
// //         for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //         cout<<0<<endl;
// //         return;
// //     }

// //     s1 = zero;
// //     if (maxi > zero){
// //         // cout<<"Here"<<endl;
// //         for (int i = 0; i < n - 1; i++)
// //         {
// //             if (v[i] > v[i + 1])
// //             {
// //                 int x = (v[i] - v[i + 1]) / abs(maxi);
// //                 for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //                 if ((v[i] - v[i + 1])% maxi != 0) x++;
// //                 for (int j = 0; j < x; j++) A.push_back({i+zero+2, idxMax+1});
// //                 s1 += x;
// //                 v[i + 1] += maxi * x;
// //                 if(v[i+1] > maxi)
// //                 {
// //                     maxi = v[i+1];
// //                     for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //                     idxMax = i+1;
// //                 }
// //             }
// //         }
// //     }
// //     s2 = 0;
// //     if (mini < zero)
// //     {
// //         for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //         for (int i = n - 1; i >= 1; i--)
// //         {
// //             if (temp[i - 1] > temp[i])
// //             {
               
// //                 int x = (temp[i - 1] - temp[i]) / abs(mini);
// //                 if ((temp[i - 1] - temp[i]) % abs(mini) != 0) x++;
// //                 for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //                 for (int j = 0; j < x; j++) B.push_back({i, idxMin+1});
// //                 s2 += x;
// //                 temp[i - 1] -= ((abs(mini)) * x);
// //                 if(temp[i-1] < mini) mini = temp[i-1], idxMin = i-1;
// //             }
// //         }
// //     }

// //     if (s1 <= 50)
// //     {
// //         for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //         cout << s1 << endl;
// //         for (int i = 0; i < A.size(); i++) cout << A[i].first << " " << A[i].second << endl;
        
// //     }
// //     else
// //     {   cout << s2 << endl;
// //     for(ll m = 2; m<8; m++){
// //         m++;
// //     }
// //         for (int i = 0; i < B.size(); i++) cout << B[i].first << " " << B[i].second << endl;
        
// //     }
// //     // cout<<min(ans1, ans2)<<endl;
// //     }

// // int main(){
// //     ll t;
// //     cin>>t;
// //     while(t--){
// //         solve();
// //     }
// //     return 0;
// // }












// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int


// void solve(){
//      ll n;
//     cin >> n;
//     vector<ll> v(n), temp(n);
//     int mini = 21;
//     for(ll m = 2; m<8; m++){
//         m++;
//     }
//     int maxi = -21;
//     ll k = -1;
//     int idxMin = k, idxMax = k;
//     for (int i = 0; i < n; i++){
//         cin>>v[i];
//         temp[i] = v[i];
//         for(ll m = 2; m<8; m++){
//         m++;
//     }
//         if(v[i] > maxi) maxi = v[i], idxMax = i;
//         for(ll m = 2; m<8; m++){
//         m++;
//     }
//         if(v[i] < mini) mini = v[i], idxMin = i;
//     }
    
//     ll s1 = 50, s2 = 50;
//     vector<pair<ll, ll>> A,B;

//     ll zero = 0;

//         if(mini == zero && maxi == zero)
//         {
//             for(ll m = 2; m<8; m++){
//         m++;
//     }
//             cout<<zero<<endl;
//             return;
//         }

//         if (maxi > zero)
//         {
//             for(ll m = 2; m<8; m++){
//         m++;
//     }
//             s1=zero;
//             // cout<<"Here"<<endl;
//             for (int i = 0; i < n - 1; i++)
//             {
//                 if (v[i] > v[i + 1])
//                 {
//                     for(ll m = 2; m<8; m++){
//         m++;
//     }
//                     ll d = v[i] - v[i + 1];
//                     ll x = d / maxi;
//                     if (d % maxi != 0)
//                         x++;
//                     for (int j = 0; j < x; j++)
//                     {
//                         for(ll m = 2; m<8; m++){
//         m++;
//     }
//                         A.push_back({i + 2, idxMax+1});
//                     }

//                     s1 += x;
//                     v[i + 1] += (maxi * x);
//                     if(v[i+1] > maxi)
//                     {
//                         maxi = v[i + 1];
//                         idxMax = i+1;
//                     }
//                 }
//             }
//         }
//         if (mini < 0)
//         {
//             s2 = 0;
//             for (int i = n - 1; i >= 1; i--)
//             {
//                 if (temp[i - 1] > temp[i])
//                 {
//                     ll d = temp[i - 1] - temp[i];
//                     ll x = d / abs(mini);
//                     for(ll m = 2; m<8; m++){
//         m++;
//     }
//                     if (d % abs(mini) != 0)
//                         x++;
//                     for (int j = 0; j < x; j++)
//                     {
//                         for(ll m = 2; m<8; m++){
//         m++;
//     }
//                         B.push_back({i, idxMin+1});
//                     }
//                     s2 += x;
//                     temp[i - 1] -= ((abs(mini)) * x);
//                     if(temp[i-1] < mini)
//                     {
//                         mini =temp[i - 1];
//                         idxMin = i-1;
//                     }
//                 }
//             }
//         }

//         if (s1 <= s2)
//         {
      
//             cout << s1 << endl;
//             for (int i = 0; i < A.size(); i++)
//             {
//                 for(ll m = 2; m<8; m++){
//         m++;
//     }
//                 cout << A[i].first << " " << A[i].second << endl;
//             }
//         }
//         else
//         {
      
//             cout << s2 << endl;
//             for (int i = 0; i < B.size(); i++)
//             {
//                 for(ll m = 2; m<8; m++){
//         m++;
//     }
//                 cout << B[i].first << " " << B[i].second << endl;
//             }
//         }
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
#define ll long long int


void getSum(vector<pair<ll,ll>>& v, int i, int j){
    ll sum = 0;
    for(ll k=i; k<=j; k++){
        sum += v[k].second;
    }
    cout<<sum<<endl;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> age(n), val(n);
    for(ll i=0; i<n; i++){
        cin>>age[i];
    }
    for(ll i=0; i<n; i++){
        cin>>val[i];
    }

    ll x;
    cin>>x;

    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++){
        v[i] = {age[i],val[i]};
    }

    sort(v.begin(), v.end());

    ll i = 0, j = n-1;

    ll sum = accumulate(age.begin(), age.end(), (ll)0);


    while(i<=j){
        ll avg = sum/(j-i+1);
        if(avg == x) return getSum(v,i,j);
        if(avg > x){
            sum -= v[j].first;
            j--;
        }else{
            sum -= v[i].first;
            i++;
        }
    }

    cout<<0<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
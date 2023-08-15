#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;

if (x != 1)
{
    cout << "YES" << endl;
    cout << n << endl;
    int i = 1;
    while (i < n + 1)
    {
        cout << 1 << " ";
        i++;
    }
    cout << endl;
}
else if (k <= 1 || n == 1) cout << "NO" << endl;
else if (n % 2 == 0)
{
    cout << "YES" << endl;
    cout << n / 2 << endl;
    int j = 1;
    while (j <= n / 2)
    {
        cout << 2 << " ";
        j++;
    }
    cout << endl;
}
else if (k > 2)
{
    cout << "YES" << endl;
    cout << (n - 3) / 2 + 1 << endl;
    int j = 1;
    while (j <= (n - 3) / 2)
    {
        cout << 2 << " ";
        j++;
    }
    cout << 3;
    cout << endl;
}else cout<<"NO"<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
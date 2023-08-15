#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if(x%2 == 1) cout<<-1<<endl;
        else if(((x/2) ^ (x + x/2)) == x) cout<< x/2 <<" "<< x+x/2 << endl;
        else cout<<-1<<endl;
    }
    return 0;
}

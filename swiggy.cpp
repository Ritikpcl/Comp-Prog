
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void initCode() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

int breakThePrison(vector<int> &H ,vector<int> &V, int n, int m, int x, int y)
{

	vector<bool> boolH(n+1,true);
	vector<bool> boolV(m+1,true);

	for (int i = 0; i < x; ++i)
	{
		boolH[H[i]] = false;
	}
	for (int i = 0; i < y; ++i)
	{
		boolV[V[i]] = false;
	}

	int localMaxHorizontal = 0;
	int globalMaxHorizontal = -1;

	int localMaxVertical = 0;
	int globalMaxVertical = -1;

	for (int i = 1; i <= n; ++i)
	{
		if(boolH[i])
		{
			localMaxHorizontal = 0;
		}
		else
		{
			localMaxHorizontal++;
			globalMaxHorizontal = max(localMaxHorizontal, globalMaxHorizontal);
		}
	}
	for (int i = 1; i <= m; ++i)
	{
		if(boolV[i])
		{
			localMaxVertical = 0;
		}
		else
		{
			localMaxVertical++;
			globalMaxVertical = max(localMaxVertical, globalMaxVertical);
		}
	}

	return (globalMaxHorizontal + 1) * (globalMaxVertical + 1);
}

int main(){
    initCode();
    int N = 3,M = 3;
    int x = 1, y = 1;
    vector<int> H = {2}, V = {2};
    cout << breakThePrison(H,V,N,M,x,y);
}

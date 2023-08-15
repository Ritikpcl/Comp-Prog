#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

vector<vector<int>> formSpiralMatrix(vector<int> arr, int R, int C)
{
    vector<vector<int>> mat(R*C, vector<int> (R*C,0));
	int top = 0,
		bottom = R - 1,
		left = 0,
		right = C - 1;

	int index = 0;

	while (1) {

		if (left > right)
			break;


		for (int i = left; i <= right; i++)
			mat[top][i] = arr[index++];
		top++;

		if (top > bottom)
			break;


		for (int i = top; i <= bottom; i++)
			mat[i][right] = arr[index++];
		right--;

		if (left > right)
			break;


		for (int i = right; i >= left; i--)
			mat[bottom][i] = arr[index++];
		bottom--;

		if (top > bottom)
			break;

		for (int i = bottom; i >= top; i--)
			mat[i][left] = arr[index++];
		left++;
	}
    return mat;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n*n);
        int a=1;
        int b=n*n;
        int k = 0;
        int turn = 0;
        while(k<n*n){
            if(turn == 0) {
                v[k] = a;
                a++;
                turn=1;
            }else{
                v[k]=b;
                b--;
                turn=0;
            }
            k++;
        }

        vector<vector<int>> ans = formSpiralMatrix(v,n,n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout << endl;
        cout<<endl;
    }
    
return 0;
}
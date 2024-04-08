#include <bits/stdc++.h> 
using namespace std; 

void initCode() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

int solve(pair<int,int>& p, pair<int,int>& q, pair<int,int>& r) 
{ 
	int val = (q.second - p.second) * (r.first - q.first) - 
			(q.first - p.first) * (r.second - q.second); 

	if (val == 0) return 0; 
	return (val > 0)? 1: 2; 
} 

void to_int(string points[], int n, vector<pair<int,int>>& v){
  int i=0;
  for(int i=0; i<n; i++){
    int j = 1;
    int x = 0;
    while(j<points[i].length() && points[i][j] != ',') {
      x = x*10 + (points[i][j]-'0');
      j++;
  	}
    j++;
    int y = 0;
    while(j<points[i].length() && points[i][j] != ')'){
      y = y*10 + (points[i][j]-'0');
      j++;
    }
    v.push_back({x,y});
  }
  
}

string convexHull(string points[], int n) 
{ 

  
    vector<pair<int,int>> v;
    to_int(points,n,v);

	vector<pair<int,int>> help; 


	int l = 0; 
	for (int i = 1; i < n; i++) {
      
		if (v[i].first < v[l].first) 
			l = i; 
    }

	int p = l, q; 
	do
	{ 
		help.push_back(v[p]); 
		q = (p+1)%n; 
		for (int i = 0; i < n; i++) 
		if (solve(v[p], v[i], v[q]) == 2) q = i; 
		p = q; 

	} while (p != l); 

    return to_string(help.size());	
} 

// Driver program to test above functions 
int main() 
{ 
	string points[] = {"(0, 1)", "(3, 6)", "(2, 2)", "(0, 7)"}; 
	int n = sizeof(points)/sizeof(points[0]); 
	cout<<convexHull(points, n); 
	return 0; 
} 

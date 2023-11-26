class Solution {
public:

    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
        int ans = INT_MIN;

        for(int i=0; i<m; i++){
            v[0][i] = matrix[0][i];
            for(int j=1; j<n; j++){
                if(matrix[j][i]) v[j][i] = v[j-1][i] + matrix[j][i];
                else v[j][i] = 0;
            }
        }

        for(int i=0; i<n; i++){
            sort(v[i].begin(), v[i].end(), greater());
            for(int j=0; j<m; j++){
                ans = max(ans, (j+1)*v[i][j]);
            }
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int Lsum = 0;
        int sum = accumulate(nums.begin(),nums.end(),0);
        for(int i=0; i<nums.size(); i++){
            int x = (i)*nums[i] - Lsum - (n-i)*nums[i] + (sum-Lsum);
            ans.push_back(x);
            Lsum += nums[i];
        }
        return ans;
    }
};
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(), i=0, j=n-1;
        int ans = 0;
        while(i<j){
            ans = max(ans,nums[i++]+nums[j--]);
        }
        return ans;
    }
};
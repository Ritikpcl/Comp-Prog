class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size(), i=0, j=1, ans = 0;
        long long diff = 0;
        while(j<n){
            diff += (j-i)*((long long)nums[j]-nums[j-1]);
            if(diff > k){
                diff -= (nums[j]-nums[i]);
                i++;
            }
            j++;
        }
        return j-i;
    }
};
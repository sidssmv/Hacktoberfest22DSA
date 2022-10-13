class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int pre_sum =0;
        for( auto it=0;it<n;it++)
        {
            pre_sum+=nums[it];
            nums[it] = pre_sum;
        }
        return nums;
    }
};

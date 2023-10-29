class Solution {
public:
    vector<vector<int>>dp;
    int helper(vector<int>& nums, int target, int idx) {
        if(target == 0) return 0;
        if(target < 0 || idx >= nums.size()) return -1001;
        if(dp[idx][target] != -1) return dp[idx][target];
        int take = 1+ helper(nums, target-nums[idx], idx+1);
        int notTake = helper(nums, target, idx+1);
        return dp[idx][target] = max(take, notTake);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        dp.resize(1001, vector<int>(1001, -1));
        int ans = helper(nums, target, 0);
        return ans > 0 ? ans : -1;
    }
};
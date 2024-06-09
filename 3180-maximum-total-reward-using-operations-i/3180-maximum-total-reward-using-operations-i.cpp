class Solution {
public:
    int dp[2001][4000];
    int maxReward(int idx, vector<int>& nums, int n, int reward){
        if(idx == n){
            return 0;
        }
        
        if(dp[idx][reward] != -1){
            return dp[idx][reward];
        }
        
        int notPick = maxReward(idx+1, nums, n, reward);
        int pick = 0;
        if(reward < nums[idx]) {
            pick = maxReward(idx+1, nums, n, reward + nums[idx]) + nums[idx];
        }
        
        return dp[idx][reward] = max(pick, notPick);
    }
    int maxTotalReward(vector<int>& rewardValues) {
        memset(dp, -1, sizeof(dp));
        sort(rewardValues.begin(), rewardValues.end());
        int n = rewardValues.size();
        return maxReward(0, rewardValues, n, 0);
    }
};
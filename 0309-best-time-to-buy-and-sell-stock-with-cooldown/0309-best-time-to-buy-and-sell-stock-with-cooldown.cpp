class Solution {
private:
    int f(int idx, int buy, vector<int>& prices, vector<vector<int>> &dp){
        if(idx >= prices.size()) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        if(buy == 1){
            return dp[idx][buy] = max(-prices[idx]+f(idx+1,0,prices, dp), 0+f(idx+1,1,prices, dp));
        }
        return dp[idx][buy] = max(prices[idx]+f(idx+2,1,prices, dp), 0+f(idx+1,0,prices, dp));
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n,vector<int>(2 , -1));
        return f(0,1,prices,dp);
    }
};
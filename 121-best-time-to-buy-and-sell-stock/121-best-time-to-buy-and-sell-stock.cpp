class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFor = prices[0];
        int maxProfit = 0;
        
        for(int i = 0; i < prices.size(); i++){
            minSoFor = min(minSoFor, prices[i]);
            int profit = prices[i] - minSoFor;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
        
    }
};